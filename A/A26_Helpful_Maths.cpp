

/*
problem link ----> https://codeforces.com/contest/339/problem/A
*/


#include <iostream>
#include <string>

using namespace std;



int main(){

    string s;
    getline(cin, s);

    for(int i=0; i<s.length()-1; i++){
        if(s[i] == '+')continue;
        for(int j=i+1; j<s.length(); j++){
            if(s[j] == '+')continue;
            if(s[i]>s[j]){
                char t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
        }
    }

    cout<<s;

    return 0;
}