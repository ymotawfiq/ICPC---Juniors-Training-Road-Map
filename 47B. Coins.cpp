

/*
problem link ----> https://codeforces.com/contest/47/problem/B
*/


#include <iostream>
#include <map>
using namespace std;

char find_min(map<char, int>& mp){
    char ch;
    int x = 999;
    for(auto m : mp){
        if(m.second < x){
            x = m.second;
            ch = m.first;
        }
    }    
    return ch;
}

int main(){
    map<char, int>mp;
    mp.insert({'A', 0});
    mp.insert({'B', 0});
    mp.insert({'C', 0});
    for(int i=0; i<3; i++){
        string s;cin>>s;
        if(s[1]=='>')mp[s[0]]++;
        else mp[s[2]]++;
    }
    if(mp['A'] == 1 && mp['B'] == 1 && mp['C'] == 1)cout<<"Impossible";
    else{
        for(int i=0; i<3; i++){
            char ch = find_min(mp);
            cout<<ch;
            mp[ch] = 999;
        }
    }
    return 0;
}
