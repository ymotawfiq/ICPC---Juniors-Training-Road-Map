

/*
problem link ----> https://codeforces.com/contest/785/problem/A
*/


#include <iostream>

using namespace std;


int main(){
    
    unsigned int ans = 0;
    short arr[26];

    arr['T'-'A'] = 4;
    arr['C'-'A'] = 6;
    arr['O'-'A'] = 8;
    arr['D'-'A'] = 12;
    arr['I'-'A'] = 20;

    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        ans += arr[s[0]-'A'];
    }

    cout<<ans;

    return 0;
}