

/*
problem link ----> https://codeforces.com/contest/112/problem/A
*/


#include <iostream>
#include <string>

using namespace std;


void readString(string& s){
    cin>>s;
}


void compareStrings(string& s1, string& s2, short& ans){
    for(int i=0; i<s1.length(); i++){
        if(tolower(s1[i])>tolower(s2[i])){
            ans = 1;
            return;
        }
        else if(tolower(s1[i])<tolower(s2[i])){
            ans = -1;
            return;
        }
    }
    ans = 0;
}

int main(){

    short ans = 0;
    string s1, s2;
    readString(s1);
    readString(s2);
    compareStrings(s1, s2, ans);
    cout<<ans;

    return 0;
}