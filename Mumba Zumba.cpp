#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int m, n;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>m;
    if(m%2 == 0)
        cout<<"MUMBA\n";
    else
        cout<<"ZUMBA\n";
    }

    return 0;
}
