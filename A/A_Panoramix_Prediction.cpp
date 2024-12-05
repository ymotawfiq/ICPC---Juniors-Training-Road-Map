

/*
problem link ----> https://codeforces.com/contest/80/problem/A
*/


#include <iostream>

using namespace std;

bool isPrime(short n){
    for(int i=2; i<=n/2; i++){
        if(n%i==0)return false;
    }
    return true;
}


int main(){
    
    short n, m;
    cin>>n>>m;

    short nextPrime;

    if((n<2 && m<2) || n == m || !isPrime(m)){
        cout<<"NO";
        return 0;
    }

    nextPrime=n+1;
    while(!isPrime(nextPrime) && nextPrime <= m){
        nextPrime++;
    }

    if(nextPrime == m)cout<<"YES";
    else cout<<"NO";

    return 0;
}