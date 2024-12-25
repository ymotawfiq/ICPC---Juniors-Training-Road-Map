
/*
problem link --> https://codeforces.com/contest/262/problem/A
*/

#include <iostream>
using namespace std;

short countLuckyNumbers(int n){
    short ans = 0;
    while(n){
        if(n%10 == 4 || n%10 == 7)ans++;
        n /= 10;
    }
    return ans;
}

int main(){

    short n, k;
    cin>>n>>k;

    short ans = 0;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(countLuckyNumbers(x) <= k)ans++;
    }

    cout<<ans;

    return 0;
}
