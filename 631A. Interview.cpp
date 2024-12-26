

/*
problem link ----> https://codeforces.com/contest/631/problem/A
*/


#include <iostream>
using namespace std;

int main(){
    short n;cin>>n;
    int x = 0, y = 0, a;
    for(int i=0; i<n; i++){
        cin>>a;
        x |= a;
    }
    for(int i=0; i<n; i++){
        cin>>a;
        y |= a;
    }
    cout<<x+y;
    return 0;
}
