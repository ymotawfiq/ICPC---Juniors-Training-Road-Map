

/*
problem link ----> https://codeforces.com/contest/680/problem/B
*/


#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    short n, a;
    cin>>n>>a;
    short c = 0;
    short* arr = new short[n];
    for(short i=0; i<n; i++)cin>>arr[i];
    //short i= a-1, j= i - 1, k = i + 1;
    if(arr[a-1])c++;
    for(int j = a - 2, k = a; j>=0 || k<n; j--, k++){
        if(j>=0 && k<n){
            if(arr[j] && arr[k]) c+=2;
            else continue;
        }
        if(j>=0 && k >= n){
            if(arr[j])c++;
        }
        if(j<0 && k < n){
            if(arr[k])c++;
        }
    }
    cout<<c;

    delete[] arr;
    return 0;
}
