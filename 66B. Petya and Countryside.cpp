

/*
problem link ----> https://codeforces.com/contest/66/problem/B
*/


#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    short n;
    cin>>n;
    short m = 1, c = 1;
    short* arr = new short[n];
    for(short i=0; i<n; i++)cin>>arr[i];
    for(short i=0; i<n; i++){
        short j = i - 1, k = i;
        while(j>=0 && arr[j]<=arr[k]){
            c++;
            j--;
            k--;
        }
        j = i + 1;
        k = i;
        while(j<n && arr[j]<=arr[k]){
            c++;
            j++;
            k++;
        }
        m = max(m, c);
        c = 1;
    }
    cout<<m;

    delete[] arr;
    return 0;
}
