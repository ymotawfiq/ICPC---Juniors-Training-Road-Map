
/*
problem link --> https://codeforces.com/contest/467/problem/A
*/

#include <iostream>
using namespace std;


int main(){

    short n, c=0;
    cin>>n;

    while(n--){
        short p, q;
        cin>>p>>q;
        if(p+2<=q)c++;
    }
    cout<<c;


    return 0;
}
