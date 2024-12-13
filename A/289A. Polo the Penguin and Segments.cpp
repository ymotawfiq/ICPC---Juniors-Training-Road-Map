/*
problem link ----> https://codeforces.com/contest/289/problem/A
*/
 
 
#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
 

    int n, k;
    cin>>n>>k;
    int c = 0;
    for(int i=0; i<n; i++){
        int x, y;
        cin>>x>>y;
        c += y - x + 1;
    }
    int m = c % k;
    if(!m)cout<<0;
    else{
        cout<<abs(m - k);
    }
    


    return 0;
}