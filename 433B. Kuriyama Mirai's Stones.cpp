

/*
problem link ----> https://codeforces.com/contest/433/problem/B
*/


#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int main(){
    int n;cin>>n;
    ll* arr = new ll[n];
    ll* arr2 = new ll[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        arr2[i] = arr[i];
    }
    sort(arr2, arr2+n);
    for(int i=1; i<n; i++){
        arr[i] += arr[i-1]; 
        arr2[i] += arr2[i-1]; 
    }
    int q;cin>>q;
    for(int i=0; i<q; i++){
        int t, l, r;cin>>t>>l>>r;
        l--;
        r--;
        if(t==1){
            if(l==0)cout<<arr[r]<<endl;
            else cout<<arr[r]-arr[l-1]<<endl;
        }
        else{
            if(l == 0)cout<<arr2[r]<<endl;
            else cout<<arr2[r]-arr2[l-1]<<endl;
        }
    }
    delete[] arr;delete[]arr2;
    return 0;
}
