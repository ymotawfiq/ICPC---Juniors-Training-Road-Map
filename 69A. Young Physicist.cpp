
/*
problem link --> https://codeforces.com/contest/69/problem/A
*/

#include <iostream>
using namespace std;

int main(){

    short n, flag = 1;
    cin>>n;

    short arr [3]{0};

    for(short i=0; i<n; i++){
        for(short j=0; j<3; j++){
            short k;
            cin>>k;
            arr[j] += k;
        }
    }


    for(int i=0; i<3; i++){
        if(arr[i] != 0){
            flag = 0;
            break;
        }
    }

    if(flag) cout<<"YES";
    else cout<<"NO";


    return 0;
}
