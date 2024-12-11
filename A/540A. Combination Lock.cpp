

/*
problem link ----> https://codeforces.com/contest/540/problem/A
*/


#include <iostream>
#include <cmath>

using namespace std;

int main(){

    short n;
    cin>>n;
    string disk_state;
    cin>>disk_state;
    string real_password;
    cin>>real_password;

    short ans = 0;
    for(int i=0; i<real_password.length(); i++){
        short n1 = disk_state[i] - '0';
        short n2 = real_password[i] - '0';
        short way1 = abs(n1 - n2);
        short way2 = abs(9 - max(n1, n2)) + min(n1, n2) + 1;
        ans += min(way1, way2);
    }

    cout<<ans;

    return 0;
}
