
/*
problem link --> https://codeforces.com/contest/47/problem/A
*/

#include <iostream>
using namespace std;

int main(){

    short n;
    cin>>n;
    short i= 1;
    while(n > 0){
        n -= i;
        i++;
    }
    if(n == 0)cout<<"YES";
    else cout<<"NO";

    return 0;
}
