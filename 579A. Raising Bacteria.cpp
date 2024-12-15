/*
problem link ----> https://codeforces.com/contest/579/problem/A
*/


#include <iostream>
using namespace std;

int main(){

    int n;cin>>n;

    int c = n % 2 == 0 ? 0 : 1;
    while(n>0){
        n /= 2;
        if(n % 2 != 0)c++;
    }
    cout<<c;



    return 0;
}
