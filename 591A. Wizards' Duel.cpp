

/*
problem link ----> https://codeforces.com/contest/591/problem/A
*/


#include <iostream>
#include <cmath>

using namespace std;

int main(){

    short l, p, q;
    cin>>l>>p>>q;

    float sum = p + q;

    cout<< l * (p / sum);

    return 0;
}