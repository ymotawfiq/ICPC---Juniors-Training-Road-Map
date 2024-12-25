

/*
problem link ----> https://codeforces.com/contest/677/problem/A
*/


#include <iostream>
#include <vector>
using namespace std;


short calculateTotalHeight(){
    short n = 0, h = 0, ans = 0;

    cin>>n>>h;
    vector<short> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<v.size(); i++){
        if(v[i]>h)ans+=2;
        else ans+=1;
    }
    return ans;
}

int main(){

    cout << calculateTotalHeight();

    return 0;
}