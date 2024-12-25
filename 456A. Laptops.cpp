
/*
problem link --> https://codeforces.com/contest/456/problem/A
*/

#include <iostream>
#include <string>
using namespace std;


int main(){

    int n;
    cin>>n;

    short isWin = 0;

    for(int i=0; i<n; i++){
        int x, y;
        cin>>x>>y;
        if(x != y)isWin = 1;
    }

    isWin ? cout<<"Happy Alex":cout<<"Poor Alex";

    return 0;
}
