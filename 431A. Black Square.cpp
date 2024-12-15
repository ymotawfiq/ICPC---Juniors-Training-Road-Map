

/*
problem link ----> https://codeforces.com/contest/431/problem/A
*/


#include <iostream>
#include <string>

using namespace std;



int main(){

    int arr[4];
    for(int i=0; i<4; i++){
        cin>>arr[i];
    }
    string s;
    cin>>s;
    int ans = 0;
    for(int i=0; i<s.length(); i++){
        ans += arr[(s[i]-'0') - 1];
    }
    cout<<ans;
    return 0;
}