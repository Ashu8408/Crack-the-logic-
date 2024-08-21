#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int testCases, num;
    cin>>testCases;


    while(testCases--){
        cin>>num;
        int c=0;     
        int temp = num;

    while(temp >0){
        int q = temp %10;
        if(q != 0 && num % q ==0){
            c++;

        }
        temp=temp/10;
    }
        cout<<c<<endl;
}


    return 0;
}
