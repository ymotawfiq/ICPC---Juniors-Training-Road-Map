
/*
problem link --> https://codeforces.com/contest/255/problem/A
*/

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main(){

    short n;
    cin>>n;
    short ans[3]{0};
    for(short i=0; i<n; i++){
        short x;
        cin>>x;
        ans[i%3] += x;
    }



    if(ans[0] == max({ans[0], ans[1], ans[2]}))cout<<"chest";
    else if(ans[1] == max({ans[0], ans[1], ans[2]}))cout<<"biceps";
    else cout<<"back";


    return 0;
}
