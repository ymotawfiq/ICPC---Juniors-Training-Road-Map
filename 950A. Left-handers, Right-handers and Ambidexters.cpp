
/*
problem link --> https://codeforces.com/contest/950/problem/A
*/

#include <iostream>
#include <string>
using namespace std;


int main(){

    short l, r, a;

    cin>>l>>r>>a;

    if(a == 0 && (l == 0 || r == 0)){
        cout<<0;
        return 0;
    }

    if(l == r){
        l += a/2;
        r += a/2;
        cout<<l+r;
        return 0;
    }

    if(l < r){
        if(l + a <= r){
            l += a;
            cout<< 2 * l;
            return 0;
        }
        else{
            a -= l - r;
            l += l - r;
            r += a/2;
            l += a/2;
            cout<<l+r;
            return 0;
        }
    }
    else{
        if(r + a <= l){
            r += a;
            cout<< 2 * r;
            return 0;
        }
        else{
            a -= r - l;
            r += r - l;
            r += a/2;
            l += a/2;
            cout<<l+r;
            return 0;
        }
    }

    return 0;
}
