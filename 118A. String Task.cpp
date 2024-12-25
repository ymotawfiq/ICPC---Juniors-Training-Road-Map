
/*
problem link --> https://codeforces.com/contest/118/problem/A
*/

#include <iostream>
#include <string>
using namespace std;

short is_vowel(const char& ch){
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'Y':
        return 1;
    }
    return 0;
}

int main(){

    string s;
    cin>>s;

    string ans = "";

    for(int i=0; i<s.length(); i++){
        if(!is_vowel(s[i])){
            ans.append(".");
            ans += tolower(s[i]);
        }
    }

    cout<<ans;

    return 0;
}
