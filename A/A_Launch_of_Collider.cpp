

/*
problem link ----> https://codeforces.com/contest/699/problem/A
*/


#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

    int n;
    string s;


    cin>>n;
    cin>>s;
    int* v = new int[n];

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int minn = INT_MAX;
    bool flag = false;
    for(int i=0; i<n-1; i++){
        if(s[i] == 'R' && s[i+1] == 'L'){
            minn = min((v[i + 1] - v[i]) / 2, minn);
            flag = true;
        }
    }
    if(flag) cout<<minn;
    else cout<<-1;
    
    delete[] v;
    return 0;
}