
/*
problem link --> https://codeforces.com/contest/41/problem/A
*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    string s;
    getline(cin, s);

    string s1;
    getline(cin, s1);

    if(s.length() != s1.length()){
        cout<<"NO";
        return 0;
    }

    for(int i=0, j=s1.length()-1; i<s.length() && j>=0; i++, j--){
        if(s[i] != s1[j]){
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";

    return 0;
}
