

/*
problem link ----> https://codeforces.com/contest/9/problem/A
*/


#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){

    short y, w;
    cin>>y>>w;
    const string probability[7] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    short z = max(y, w);
    cout << probability[z] << endl;
    
    return 0;
}
