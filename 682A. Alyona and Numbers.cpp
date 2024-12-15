/*
problem link ----> https://codeforces.com/contest/682/problem/A
*/


#include <iostream>

using namespace std;


int main(){

    int n,m;
    cin>>n>>m;
    long long c = 0;
    for(int i=1; i<=n; i++){
        c += (i % 5 + m) / 5;
    }

    cout<<c;

    return 0;
}
