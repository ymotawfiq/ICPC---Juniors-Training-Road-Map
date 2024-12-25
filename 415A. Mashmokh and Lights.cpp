
/*
problem link --> https://codeforces.com/contest/415/problem/A
*/

#include <iostream>
using namespace std;

int main(){

    short n, m;
    cin>>n>>m;

    short* lightsOff = new short[n]{0};
    for(int i=0; i<m; i++){
        short button;
        cin>>button;
        button--;
        for(int j=button; j<n; j++){
            if(lightsOff[j] == 0) lightsOff[j] = button + 1;
        }
    }

    for(int i=0; i<n; i++){
        cout<<lightsOff[i]<<" ";
    }


    delete[] lightsOff;

    return 0;
}
