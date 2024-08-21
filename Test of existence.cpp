#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string st1;
    char c;
    int t=0;

    cin>>c>>st1;
    
    for( char ch : st1){
        if(ch==c){
            t++;
            break;
        }
        }
    if( t == 0)
        cout<<"NO";
    else
        cout<<"YES";


    return 0;
}
