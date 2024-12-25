

/*
problem link ----> https://codeforces.com/contest/16/problem/B
*/


#include <iostream>

using namespace std;

struct stPair{
    int a;
    short b;
};

void heapify(stPair* arr, const short& m, const short& index){
    short ma = index;
    short l = 2 * index + 1;
    short r = 2 * index + 2;
    if(l < m && arr[l].b > arr[ma].b)ma = l;
    if(r < m && arr[r].b > arr[ma].b)ma = r;
    if(ma != index){
        stPair p = arr[index];
        arr[index] = arr[ma];
        arr[ma] = p;
        heapify(arr, m, ma);
    }
}

void sort(stPair* arr, const short& m){
    for(int i=m/2-1; i>=0; i--)heapify(arr, m, i);
    for(int i=m-1; i>0; i--){
        stPair p = arr[i];
        arr[i] = arr[0];
        arr[0] = p;
        heapify(arr, i, 0);
    }
}

int main(){
    int n;cin>>n;
    short m; cin>>m;
    int ans = 0;
    stPair* arr = new stPair[m];
    for(int i=0; i<m; i++)cin>>arr[i].a>>arr[i].b;
    sort(arr, m);
    short j = m - 1;
    while(n>0 && j>=0){
        if(arr[j].a >= n)ans += n * arr[j].b;
        else ans += arr[j].a * arr[j].b;
        n -= arr[j].a;
        j--;
    }
    cout<<ans;

    delete[] arr;
    return 0;
}
