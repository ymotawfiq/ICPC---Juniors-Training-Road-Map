

/*
problem link ----> https://codeforces.com/contest/9/problem/A
*/


#include <iostream>
#include <string>
using namespace std;

int main(){

    int n1, n2;
    cin>>n1>>n2;

    if(n1+n2==6)cout<<"1/2";
    else if(n1+n2<6)cout<<"1/1";
    else cout<<"0/1";

    return 0;
}