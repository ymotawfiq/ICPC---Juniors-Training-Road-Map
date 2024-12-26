

/*
problem link ----> https://codeforces.com/contest/224/problem/A
*/


#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int a=sqrt((x*y)/z);
    int b=sqrt((x*z)/y);
    int c=sqrt((y*z)/x);
    cout<<(a+b+c)*4;

    return 0;
}