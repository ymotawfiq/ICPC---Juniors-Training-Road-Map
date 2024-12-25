
/*
problem link --> https://codeforces.com/contest/378/problem/A
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    short a, b;
    cin>>a>>b;

    short aWin = 0, bWin = 0, draw = 0;

    for(int i=1; i<=6; i++){
        short x = abs(i - a);
        short y = abs(i - b);
        if(x == y)draw++;
        else if(x < y)aWin++;
        else bWin++;
    }

    cout<<aWin<<" "<<draw<<" "<<bWin;

    return 0;
}
