

/*
problem link ----> https://codeforces.com/contest/1/problem/A
*/


#include <iostream>

using namespace std;


int main(){
    
    unsigned long long int n, m, a, len, width;
    cin>>n>>m>>a;

    len = (n + a -1)/a; 
    width = (m + a -1)/a; 

    cout<<len*width;

    return 0;
}