
/*
problem link --> https://codeforces.com/contest/659/problem/A
*/

#include <iostream>
#include <cmath>
using namespace std;


int main(){

    short n, a, b;
    cin>>n>>a>>b;
    short i = a;
    short n1 = abs(b);
    while(n1--){
        if(b < 0)i--;
        else i++;
        if(i<1)i=n;
        else if(i==n+1)i=1;
    }
    cout<<i;
    return 0;
}