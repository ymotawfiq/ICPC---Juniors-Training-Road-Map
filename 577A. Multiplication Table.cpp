

/*
problem link ----> https://codeforces.com/contest/577/problem/A
*/


#include <iostream>

using namespace std;

int main(){
    int n, x;
    cin>>n>>x;
    int ans = 0;
    if(x<=n)ans=1;
    for(int i=2; i<=n; i++)
        if(x % i == 0 && x / i <= n)ans++;
    cout<<ans;
    return 0;
}