

/*
problem link ----> https://codeforces.com/contest/227/problem/B
*/


#include <iostream>
using namespace std;

typedef long long ll;

int main(){
    int n;cin>>n;
    int arr[100001]{0};
    for(int i=1; i<=n; i++){
        int x;cin>>x;
        arr[x] = i;
    }
    int q;cin>>q;
    ll a = 0, b=0;
    for(int i=0; i<q; i++){
        int x;cin>>x;
        a += arr[x];
        b += n - arr[x] + 1;
    }
    cout<<a<<" "<<b;
    return 0;
}
