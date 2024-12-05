

/*
problem link ----> https://codeforces.com/contest/707/problem/A
*/


#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;


int main(){

    short n, m;
    cin>>n>>m;
    
    char x;

    short isColored = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>x;
            if(x == 'C' || x == 'M' || x == 'Y') isColored = 1;
        }
    }

    if(isColored)cout<<"#Color";
    else cout<<"#Black&White";


    return 0;
}