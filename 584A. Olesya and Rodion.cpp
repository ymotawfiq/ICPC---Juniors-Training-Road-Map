

/*
problem link ----> https://codeforces.com/contest/584/problem/A
*/


#include <iostream>
#include <cmath>

using namespace std;

int main(){

    short n, t;
    cin>>n>>t;

    if(n == 1 && t == 10)cout<<-1;
    else if(t != 10){
        for(int i=1; i<=n; i++)cout<<t;
    }
    else{
        cout<<1;
        for(int i=1; i<n; i++)cout<<0;
    }

    return 0;
}