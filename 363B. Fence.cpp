
/*
problem link --> https://codeforces.com/contest/363/problem/B
*/

#include <iostream>

using namespace std;

int main(){
    int n, k;cin>>n>>k;
    int arr[150002]{0};
    for(int i=1; i<=n; i++){
        cin>>arr[i];
        arr[i] += arr[i-1];
    }
    int pos = 0, sum = 99999999;
    for(int i=k; i<=n; i++){
        if(sum > arr[i] - arr[i-k]){
            sum = arr[i] - arr[i-k];
            pos = i;
        }
    }
    cout<<pos-k+1;
    return 0;
}
