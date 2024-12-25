
/*
problem link --> https://codeforces.com/contest/688/problem/B
*/

#include <iostream>
using namespace std;

void reverse(string& s){
    for(int i=0, j=s.length()-1; i<j; i++, j--){
        char ch =s[i];
        s[i]=s[j];
        s[j]=ch;
    }
}

int main(){
    string s;cin>>s;
    cout<<s;
    reverse(s);
    cout<<s;
    return 0;
}
