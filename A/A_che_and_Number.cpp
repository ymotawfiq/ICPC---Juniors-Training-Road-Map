

/*
problem link ----> https://codeforces.com/contest/514/problem/A
*/


#include <iostream>
#include <string>
using namespace std;

int main(){

    
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        char ch = (9 - (s[i] - '0')) + '0';
        if(ch == '0' && i == 0)continue;
        if(ch<s[i]) s[i] = ch;    
    }

    cout<<s;


    return 0;
}