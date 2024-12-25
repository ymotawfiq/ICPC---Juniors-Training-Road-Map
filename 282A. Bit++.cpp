
/*
problem link --> https://codeforces.com/contest/282/problem/A
*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    short n, b=0;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s == "++X" || s == "X++")b++;
        else b--;
    }

    cout<<b;

    return 0;
}
