

/*
problem link ----> https://codeforces.com/contest/318/problem/A
*/


#include <iostream>
#include <cmath>

using namespace std;

int main(){


    unsigned long long int n, k;
    cin>>n>>k;

    unsigned long long int mid;
    if(n%2 != 0) mid = n/2 + 1;
    else mid = n/2;

    if(k <= mid){
        cout<< 2 * k - 1;
    }
    else{
        cout<<(k-mid) * 2;
    }

    return 0;
}