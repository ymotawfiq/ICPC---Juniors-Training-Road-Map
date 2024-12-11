
/*
problem link --> https://codeforces.com/contest/22/problem/A
*/

#include <iostream>
#include <string>
using namespace std;

void heapify(int* arr, int n, int i){
    int maxium = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if(l < n && arr[maxium] < arr[l]) maxium = l;
    if(r < n && arr[maxium] < arr[r]) maxium = r;

    if(maxium != i){
        int t = arr[i];
        arr[i] = arr[maxium];
        arr[maxium] = t;
        heapify(arr, n, maxium);
    }
}

void sort(int* arr, int n){
    for(int i=n/2-1; i>=0; i--)heapify(arr, n, i);
    for(int i=n-1; i>0; i--){
        int t = arr[i];
        arr[i] = arr[0];
        arr[0] = t;
        heapify(arr, i, 0);
    }
}
int main(){

    short n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    if(n == 1)cout<<"NO";
    else{
        sort(arr, n);
        int i;
        for(i=0; i<n - 1; i++){
            if(arr[i] != arr[i+1])break;
        }
        if(i + 1 == n)cout<<"NO";
        else cout<<arr[i+1];
    }
    delete[] arr;

    return 0;
}
