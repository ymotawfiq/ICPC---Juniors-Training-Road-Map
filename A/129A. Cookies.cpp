
/*
problem link --> https://codeforces.com/contest/129/problem/A
*/

#include <iostream>
#include <string>
using namespace std;


int main(){

    short n;
    cin>>n;

    short* arr = new short[n];
    int sum = 0;
    short ans = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum += arr[i];
    }

    for(int i=0; i<n; i++){
        if((sum - arr[i]) % 2 == 0)ans++;
    }

    cout<<ans;

    delete[] arr;

    return 0;
}
