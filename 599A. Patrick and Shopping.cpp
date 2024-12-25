

/*
problem link ----> https://codeforces.com/contest/599/problem/A
*/


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    int d1, d2, d3;;
    cin>>d1>>d2>>d3;

    int way1 = d1 + d3 + d2;
    int way2 = 2 * (d1 + d2);
    int way3 = 2 * (d1 + d3);
    int way4 = 2 * (d2 + d3);

    cout<<min({way1, way2, way3, way4});

    return 0;
}
