

/*
problem link ----> https://codeforces.com/contest/486/problem/A
*/


#include <iostream>

using namespace std;


int main(){
    

    long long int n;
    cin>>n;

    if(n%2==0){
        cout<<n/2;
    }
    else{
        cout<< -1 * (n/2 + 1);
    }

    return 0;
}