

/*
problem link ----> https://codeforces.com/contest/682/problem/A
*/


#include<iostream>
#include <cmath>
using namespace std;

int main(){
    long long n, m, ans=0;
    cin>>n>>m;

    for(long long i=1; i<=n; i++){
        ans += (i%5+m)/5;
    }

    cout<<ans;
    

    return 0;
}