

/*
problem link ----> https://codeforces.com/contest/551/problem/A
*/


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    short n;
    cin>>n;
    short* arr = new short[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    short curr = 0;
    for(int i=0; i<n; i++){
        short ans = 1;
        for(int j=0; j<n; j++){
            if(i==j)continue;
            if(arr[i] < arr[j]) ans++;
        }
        cout<<ans<<" ";
    }

    return 0;
}
