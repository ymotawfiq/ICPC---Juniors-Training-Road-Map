
/*
problem link --> https://codeforces.com/contest/766/problem/B
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;cin>>n;
    if(n<3){
        cout<<"NO";
        exit(0);
    }
    int* a = new int[n];
    for(int i=0; i<n; i++)cin>>a[i];
    sort(a, a+n);
    int aa, b, c;
    short check = 0;
    for(int i=0; i<n-2; i++){
        aa = a[i];
        b = a[i+1];
        c = a[i+2]; 
        if(aa + b > c && aa + c > b && c + b > aa){
            check = 1;
            cout<<"YES";
            break;
        }
    }
    if(!check)cout<<"NO";
    delete[] a;
    return 0;
}
