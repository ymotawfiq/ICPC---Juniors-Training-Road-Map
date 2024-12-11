

/*
problem link ----> https://codeforces.com/contest/540/problem/A
*/


#include <iostream>
#include <string>

using namespace std;

int main(){

    short n;
    cin>>n;

    string s = "";
    short i = 1;
    while(i<=n){
        s += to_string(i);
        i++;
    }

    cout<<s[n-1];


    return 0;
}
