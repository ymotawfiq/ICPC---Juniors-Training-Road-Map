

/*
problem link ----> https://codeforces.com/contest/599/problem/A
*/


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    short n, k;
    cin>>n>>k;
    short c = 0;
    for(int i=0; i<n; i++){
        short x;
        cin>>x;
        if(x <= 5 - k)c++;
    }

    cout<<c/3;

    return 0;
}
