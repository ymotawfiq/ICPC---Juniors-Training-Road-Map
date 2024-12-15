
/*
problem link --> https://codeforces.com/contest/723/problem/A
*/

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main(){

    short x1, x2, x3;
    cin>>x1>>x2>>x3;

    short d1 = abs(x1-x2);
    short d2 = abs(x1-x3);
    short d3 = abs(x2-x3);

    short maxx = max({d1, d2, d3});
    if(maxx == d1)cout<< d2 + d3;
    else if(maxx == d2)cout<< d1 + d3;
    else cout<< d1 + d2;



    return 0;
}
