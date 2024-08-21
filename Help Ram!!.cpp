#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    string S;
    cin>>S;
    int n = S.size();
    int c=0;

    for(int i=0; i<n; i++) {
        if((i%3 ==0 || i%3 == 2) && S[i] !='S')
            c++;
        else if(i%3 == 1 && S[i] !='O')
            c++;

    }
    cout<<c;

    return 0;
}
