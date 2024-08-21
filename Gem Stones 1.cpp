#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int N;
    cin >> N;

    set<char> gem_elements;

    // Initialize the set with all lowercase letters 'a' to 'z'
    char c = 'a';
    while (c <= 'z') {
        gem_elements.insert(c);
        c = c + 1; // Instead of using c++
    }

    int i = 0;
    while (i < N) {
        string rock;
        cin >> rock;

        set<char> current_elements;

        int j = 0;
        while (j < rock.length()) {
            char ch = rock[j];
            current_elements.insert(ch);
            j = j + 1; // Instead of using j++
        }

        // Intersect the gem_elements with current_elements
        set<char>::iterator it = gem_elements.begin();
        while (it != gem_elements.end()) {
            if (current_elements.find(*it) == current_elements.end()) {
                set<char>::iterator to_erase = it;
                it = gem_elements.erase(to_erase); // Remove elements not in the current rock
            } else {
                it = next(it); // Moving to the next iterator
            }
        }

        i = i + 1; // Instead of using i++
    }

    // Output the size of gem_elements which is the number of gem-elements
    cout << gem_elements.size() << endl;

    return 0;
}
