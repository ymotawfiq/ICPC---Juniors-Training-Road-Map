/*
problem link ----> https://codeforces.com/contest/1204/problem/A
*/


#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    short size = s.size();
    short ans = size / 2;
    if(size % 2 == 0){
        cout<<ans;
        return 0;
    }
    short c = 0;
    for(int i=1; i<size; i++){
        if(s[i] == '1')c++;
    }
    if(c > 0) c=1;
    cout<<ans+c;
    return 0;
}
