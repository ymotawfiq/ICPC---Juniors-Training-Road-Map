

/*
problem link ----> https://codeforces.com/contest/742/problem/A
*/


#include <iostream>

using namespace std;


int main(){
    
    short ans[4]{6, 8, 4, 2};

    unsigned int n;
    cin>>n;

    if(n == 0)cout<<1;

    else cout<<ans[n%4];

    return 0;
}