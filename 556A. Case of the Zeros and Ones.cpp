
/*
problem link --> https://codeforces.com/contest/556/problem/A
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    unsigned int n, c0 = 0, c1 = 0;
    cin>>n;
    char* s = new char[n+1];
    s[n] = '\0';
    for(int i=0; i<n; i++){
        cin>>s[i];
        if(s[i] == '0')c0++;
        else c1++;
    }

    cout<< n - (2 * min(c0, c1));

    delete[] s;

    return 0;
}
