

/*
problem link ----> https://codeforces.com/contest/151/problem/A
*/


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    short n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int millimeters_sum = k * l;
    int lime_slices = c * d;
    short total_tosts = 0;
    while(millimeters_sum >= nl && p >= np && lime_slices > 0){
        millimeters_sum -= nl;
        p -= np;
        lime_slices--;
        total_tosts++;
    }
    cout<<total_tosts/n;

    return 0;
}
