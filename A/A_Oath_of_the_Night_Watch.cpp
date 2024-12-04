

/*
problem link ----> https://codeforces.com/contest/768/problem/A
*/


#include <iostream>
#include <cmath>

using namespace std;


int main(){

    int nStewards;
    cin>>nStewards;

    int minV = 999999999, maxV = -1;

    int* arr = new int[nStewards];
    for(int i=0; i<nStewards; i++){
        cin>>arr[i];
        maxV = max(maxV, arr[i]);
        minV = min(minV, arr[i]);
    }

    int ans = 0;

    for(int i=0; i< nStewards; i++){
        if(arr[i] != minV && arr[i] != maxV){
            ans++;
        }
    }

    cout<<ans;


    delete[] arr;

    return 0;
}