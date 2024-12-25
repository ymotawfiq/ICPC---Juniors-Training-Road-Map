/*
problem link ----> https://codeforces.com/contest/514/problem/A
*/


#include <iostream>

using namespace std;


int main(){

    string s1, s2;
    cin>>s1>>s2;
    int find = s1.find("|");
    string l = s1.substr(0, find);
    string r = s1.substr(find + 1);
    if(l.length() > r.length() && s2.length() + r.length() < l.length()
    || r.length() > l.length() && s2.length() + l.length() < r.length()){
        cout<<"Impossible";
        return 0;
    }
    short flag = 0;
    for(int i=0; i<s2.length(); i++){
        if(l.length() < r.length()) l+=s2[i];
        else if(r.length() < l.length()) r+=s2[i];
        else{
            if((s2.length() - (i + 1)) % 2 == 0){
                cout<<"Impossible";
                return 0;
            }
            else{
                if(flag){
                    l+=s2[i];
                    flag = 0;
                }
                else{
                    r+=s2[i];
                    flag = 1;
                }
            }
        }
    }
    cout<<l<<"|"<<r;

    return 0;
}
