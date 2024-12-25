

/*
problem link ----> https://codeforces.com/contest/160/problem/A
*/


#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;


int main(){

    int n;
    cin>>n;

    int* arr = new int[n];
    int totalSum = 0;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        totalSum += arr[i];
    }

    sort(arr, arr+n);

    int c = 0;
    int selectedSum = 0;

    for(int i=n-1; i>=0; i--){
        selectedSum += arr[i];
        c++;
        if(selectedSum > totalSum - selectedSum)break;
    }

    cout<<c;

    delete[] arr;

    return 0;
}