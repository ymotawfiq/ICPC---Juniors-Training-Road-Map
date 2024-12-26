

/*
problem link ----> https://codeforces.com/contest/355/problem/A
*/


#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    int k,d;
    cin>>k>>d;
    if(d==0 && k>1){
        cout<<"No solution";
        return 0;
    }
    for(int i=k; i>=2; i--)cout<<"9";
    cout<<d;

    return 0;
}
