

/*
problem link ----> https://codeforces.com/contest/443/problem/A
*/


#include <iostream>
#include <set>
#include <string>

using namespace std;



int main(){

    string s;
    getline(cin, s);

    set<char> se;

    for(int i=0; i<s.length(); i++){
        if(s[i]>='a'&&s[i]<='z'){
            se.insert(s[i]);
        }
    }
    cout<<se.size();
    return 0;
}