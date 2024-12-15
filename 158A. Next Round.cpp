
/*
problem link --> https://codeforces.com/contest/281/problem/A
*/

#include <iostream>
using namespace std;

int main(){

    short n, k, ans = 0;
    cin>>n>>k;

    short* arr = new short[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    for(int i=0; i<n; i++){
        if(arr[i] >= arr[k-1] && arr[i]>0)ans++;
    }

    cout<<ans;

    delete[] arr;

    return 0;
}
