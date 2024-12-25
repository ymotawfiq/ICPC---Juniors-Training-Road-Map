

/*
problem link ----> https://codeforces.com/contest/463/problem/B
*/


#include <iostream>
#include <cmath>
using namespace std;

void solution1(){
    int n;cin>>n;
    int m = 0;
    if(n == 0){
        int x;
        cin>>x;
        cout<<0;
        return;
    }
    for(int i=0; i<n; i++){
        int x = 0;cin>>x;
        if(x>m)m=x;
    }
    cout<<m;
}

void solution2(){
    int n;cin>>n;
    if(n == 0){
        int x;
        cin>>x;
        cout<<0;
        return;
    }
    int* arr = new int[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    int m = arr[0], energy = 0;
    for(int i=0; i<n-1; i++){
        if(arr[i]>=arr[i+1])energy += arr[i]-arr[i+1];
        else{
            if(energy >= arr[i+1] - arr[i])energy -= arr[i+1] - arr[i];
            else{
                m += arr[i+1]-arr[i]-energy;
                energy = 0;
            }
        }
    }
    cout<<m;
    delete[] arr;
}

int main(){
    solution2();
    return 0;
}
