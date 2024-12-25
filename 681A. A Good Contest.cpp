
/*
problem link --> https://codeforces.com/contest/681/problem/A
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    short n, ans=0;
    cin>>n;

    while(n--){
        string s;
        short before, after;
        cin>>s>>before>>after;
        if(before >= 2400){
            if(after > before) ans = 1;
        }
    }

    if(ans) cout<<"YES";
    else cout<<"NO";

    return 0;
}
