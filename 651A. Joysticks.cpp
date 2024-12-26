
/*
problem link --> https://codeforces.com/contest/651/problem/A
*/

#include <iostream>
#include <cmath>
using namespace std;


int main(){
    short a, b;
    cin>>a>>b;
    if(a == b){
        if(a == 1){
            cout<<0;
            return 0;
        }
    }
    short i = 0;
    while(a>0 && b>0){
        if(a<b){
            a++;
            b -= 2;
        }
        else{
            b++;
            a -= 2;
        }
        i++;
    }
    cout<<i;
    return 0;
}
