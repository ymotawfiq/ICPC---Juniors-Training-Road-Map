
/*
problem link --> https://codeforces.com/contest/810/problem/B
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, f;cin>>n>>f;
    int m = 0;
    long long sum=0;
    long long* a = new long long[n]{0};
    for(int i=0; i<n; i++){
        int k, l;cin>>k>>l;
        sum += min(k, l);
        if(l>k)a[i] = min(2*k, l) - min(k,l);
    }
    sort(a, a+n, greater<long long>());
    for(int i=0; i<n && f>0; i++){
        if(a[i] > 0){
            sum += a[i];
            f--;
        }
    }
    cout<<sum;
    delete[]a;
    return 0;
}
