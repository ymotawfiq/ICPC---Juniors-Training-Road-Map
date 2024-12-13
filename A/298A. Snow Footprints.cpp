/*
problem link ----> https://codeforces.com/contest/298/problem/A
*/


#include <iostream>
using namespace std;

int main(){

    short n;
    cin>>n;
    string road;
    cin>>road;
    short s, t;
    short f, l;
    for(int i=0; i<n; i++){
        if(road[i] != '.'){
            f=i;
            break;
        }
    }
    for(int i=n-1; i>=0; i--){
        if(road[i] != '.'){
            l=i;
            break;
        }
    }
    if(road[f] == 'R' && road[l] == 'R'){
        cout<<f+1<<" "<<l+1+1;
    }
    else if(road[f] == 'L' && road[l] == 'L'){
        cout<<l+1<<" "<<f;
    }
    else{
        cout<<f+1<<" ";
        for(int i=f; i<n; i++){
            if(road[i + 1] == 'L'){
                cout<<i+1;
                exit(0);
            }
        }
    }

    return 0;
}
