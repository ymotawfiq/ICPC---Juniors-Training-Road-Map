
/*
problem link --> https://codeforces.com/contest/546/problem/A
*/

#include <iostream>
#include <cmath>
using namespace std;


int main(){

    int k, w, n;
    cin>>k>>n>>w;

    long long sum = 0;
    for(int i=1; i<=w; i++){
        sum += i * k;
    }

    if(sum>n)cout<<sum-n;
    else cout<<0;

    return 0;
}
