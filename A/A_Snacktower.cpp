

/*
problem link ----> https://codeforces.com/problemset/problem/767/A
*/


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main(){

    int nSnacks;
    cin>>nSnacks;
    int n = nSnacks, k = 0;
    int* arr = new int[nSnacks];
    for(int i=0; i<nSnacks; i++){
        cin>>arr[i];
        if(arr[i] == n && k){
            sort(arr+k-1, arr+i+1);
            for(int j=i; j>=0; j--){
                cout<<arr[j]<<" ";
            }
            cout<<endl;
            n--;
        }
        else{
            cout<<endl;
            if(!k)k=i;
        }
    }

    delete[] arr;

    return 0;
}