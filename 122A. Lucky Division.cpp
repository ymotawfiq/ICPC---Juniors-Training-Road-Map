

/*
problem link ----> https://codeforces.com/contest/122/problem/A
*/


#include <iostream>
using namespace std;

short lucky[12]{4, 7, 44, 77, 47, 74, 444, 777, 477, 447, 774, 744};

short isLucky(short n){
    while(n){
        if(n%10 != 7 && n%10 != 4)return 0;
        n /= 10;
    }
    return 1;
}

short isDivisableByLucky(short n){
    for(int i=0; i<12; i++)
        if(n%lucky[i] == 0)return 1;
    return 0;
}

int main(){
    short n;cin>>n;
    if(isLucky(n) || isDivisableByLucky(n))cout<<"YES";
    else cout<<"NO";
    return 0;
}
