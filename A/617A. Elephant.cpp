
/*
problem link --> https://codeforces.com/contest/617/problem/A
*/

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main(){

    int x;
    cin>>x;

    if(x%5 == 0){
        cout<<x/5;
    }
    else if(x>5){
        cout<< x / 5 + 1;
    }
    else{
        cout<< 1;
    }

    return 0;
}
