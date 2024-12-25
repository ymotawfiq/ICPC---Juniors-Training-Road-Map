
/*
problem link --> https://codeforces.com/contest/629/problem/A
*/

#include <iostream>
using namespace std;

int countPairsByNum(short n){
    int ans = 0;
    for(int i=1; i<n; i++)ans += i;
    return ans;
}

int main(){

    short n, c = 0; 
    int ans = 0;
    cin>>n;
    char** arr = new char*[n];
    for(int i=0; i<n; i++){
        arr[i] = new char[n];
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
            if(arr[i][j] == 'C')c++;
        }
        if(c>2)ans += countPairsByNum(c);
        else if(c==2)ans++;
        c=0;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[j][i] == 'C')c++;
        }
        if(c>2)ans += countPairsByNum(c);
        else if(c==2)ans++;
        c=0;
    }
    cout<<ans;

    for(int i=0; i<n; i++){
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}
