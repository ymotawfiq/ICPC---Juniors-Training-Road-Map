/*
problem link ----> https://codeforces.com/problemset/problem/767/A
*/


#include <iostream>

using namespace std;


int main(){

    int n;
    cin>>n;
    int max = n;
    int* v = new int[max]{0};
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v[x-1] = x;
        for(int i=max-1; v[i] != 0 && max; i--){
            cout<<v[i]<<" ";
            max--;
        }
        cout<<endl;
    }

    delete[] v;

    return 0;
}
