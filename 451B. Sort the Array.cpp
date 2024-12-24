
/*
problem link --> https://codeforces.com/contest/451/problem/B
*/

#include <iostream>
#include <algorithm>
using namespace std;

short compareArray(int* a1, int* a2, int n){
    for(int i=0; i<n; i++){
        if(a1[i] != a2[i])return 0;
    }
    return 1;
}

void reverse(int* arr, int n, int l, int r){
    for(int i=l, j=r; i<j; i++, j--)swap(arr[i], arr[j]);
}

int main(){
    int n;cin>>n;
    int* a = new int[n];
    int* b = new int[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        b[i] = a[i];
    }
    sort(b, b+n);
    int l = -1, r = -1;
    for(int i=0; i<n; i++)
        if(a[i] != b[i]){
            l = i;
            break;
        }
    for(int i=n-1; i>=0; i--)
        if(a[i] != b[i]){
            r = i;
            break;
        }
    if(l==-1)cout<<"yes\n1 1";
    else{
        reverse(a, n, l, r);
        if(compareArray(a, b, n))cout<<"yes\n"<<l+1<<" "<<r+1;
        else cout<<"no";
    }
    delete[] a; delete[] b;
    return 0;
}
