

/*
problem link ----> https://codeforces.com/contest/149/problem/A
*/


#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    short k;cin>>k;
    short arr[12];
    short total = 0;
    for(int i=0; i<12; i++){
        cin>>arr[i];
        total += arr[i];
    }
    if(total < k){
        cout<<-1;
        return 0;
    }
    short month = 0, sum = 0;
    sort(arr, arr+12);
    for(int i=11; i>=0; i--){
        if(sum<k){
            sum += arr[i];
            month++;
        }
        else break;
    }
    cout<<month;

    return 0;
}