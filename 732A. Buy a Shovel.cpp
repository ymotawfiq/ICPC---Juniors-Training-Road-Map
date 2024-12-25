

/*
problem link ----> https://codeforces.com/contest/732/problem/A
*/


#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

    int price, r;
    cin>>price>>r;

    int ans = 1, k = 2;
    int price1 = price;

    while((price - r) % 10 != 0){
        if(price % 10 == 0)break;
        price = price1 * k;
        k++;
        ans++;
    }

    cout<<ans;


    return 0;
}