

/*
problem link ----> https://codeforces.com/contest/469/problem/A
*/


#include <iostream>

using namespace std;

int main(){


    short n, x, y, p, q, c;
    cin>>n;
    short* arr = new short[n]{0};

    cin>>p;
    for(int i=0; i<p; i++){
        cin>>x;
        if(!arr[x-1]){
            arr[x-1]++;
            c++;
        }
    }

    cin>>q;
    for(int i=0; i<q; i++){
        cin>>x;
        if(!arr[x-1]){
            arr[x-1]++;
            c++;
        }
    }

    if(c == n){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }


    delete[] arr;
    return 0;
}