
/*
problem link --> https://codeforces.com/contest/110/problem/A
*/

#include <iostream>
#include <string>
using namespace std;

short isLucky(long long n){
    while(n){
        if(!(n % 10 == 4 || n % 10 == 7)){
            return 0;
        }
        n /= 10;
    }
    return 1;
}

short countLucky(long long n){
    short c = 0;
    while(n){
        if(n % 10 == 4 || n % 10 == 7) c++;
        n /= 10;
    }
    if(!c)return 0;
    return isLucky(c);
}

int main(){

    long long n;
    cin>>n;

    if(countLucky(n)) cout<<"YES";
    else cout<<"NO";

    return 0;
}
