

/*
problem link ----> https://codeforces.com/contest/208/problem/A
*/


#include <iostream>
#include <cmath>
#include <string>

using namespace std;


int main(){
    
    string s, ans = "";
    getline(cin, s);

    for(int i=0; i<s.length(); i++){
        if(s[i]=='W' && s[i+1]=='U'&&s[i+2]=='B'){
            cout<<" ";
            i+=2;
        }
        else{
            cout<<s[i];
        }
    }


    return 0;
}