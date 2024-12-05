

/*
problem link ----> https://codeforces.com/contest/483/problem/A
*/


#include<iostream>

using namespace std;

int main(){
    
    long long n, x;
    cin>>n>>x;

    if(n % 2 != 0)n++;

    if(n+2>x)cout<<-1;

    else cout<<n<<" "<<n+1<<" "<<n+2;



    return 0;
}