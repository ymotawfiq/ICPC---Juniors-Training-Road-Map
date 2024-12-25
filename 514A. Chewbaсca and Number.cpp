/*
problem link ----> https://codeforces.com/contest/514/problem/A
*/


#include <iostream>

using namespace std;


int main(){

    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        int x = s[i] - '0';
        int y = 9 - x;
        int z = x < y ? x : y;
        if(i == 0 && z == 0)continue;
        s[i] = z + '0';
    }

    cout<<s;

    return 0;
}
