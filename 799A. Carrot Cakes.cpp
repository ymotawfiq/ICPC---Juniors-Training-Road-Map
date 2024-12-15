

/*
problem link ----> https://codeforces.com/contest/799/problem/A
*/


#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){

    short n,t,k,d;
    cin>>n>>t>>k>>d;

    int x = ceil(d / (t * 1.0));
    n -= x * k;
    if(n > 0){
        if(d % t != 0)cout<<"YES";
        else{
            if(n > k)cout<<"YES";
            else cout<<"NO";
        }
    }
    else{
        cout<<"NO";
    }

    return 0;
}
