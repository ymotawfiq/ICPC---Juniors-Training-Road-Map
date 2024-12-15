

/*
problem link ----> https://codeforces.com/contest/148/problem/A
*/


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    int k, l, m, n, d;
    cin>>k>>l>>m>>n>>d;

    if(k == 1 || l == 1 || m == 1 || n == 1)cout<<d;
    else{
        int c = d;
        for(int i=1; i<=d; i++){
            if((i % k != 0) && (i % l != 0) && (i % m != 0) && (i % n != 0))c--;
        }
        cout<<c;
    }
    
    return 0;
}
