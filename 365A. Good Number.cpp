

/*
problem link ----> https://codeforces.com/contest/365/problem/A
*/


#include<iostream>

using namespace std;

short isGood(int& n, const short& k){
    short arr[10];
    for(int i=0; i<=k; i++)arr[i] = -1;
    while(n){
        if(k == 0 && n%10 == 0)return 1;
        if(arr[n%10] == -1)arr[n%10]=1;
        n /= 10;
    }
    if(k == 0)return 0;
    for(int i=0; i<=k; i++){
        if(arr[i] == -1)return 0;
    }
    return 1;
}

int main(){
    

    int n, k, ans=0;
    cin>>n>>k;

    while(n--){
        int x;
        cin>>x;
        if(isGood(x, k))ans++;
    }

    cout<<ans;


    return 0;
}