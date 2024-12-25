

/*
problem link ----> https://codeforces.com/contest/278/problem/A
*/


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    short n;
    cin>>n;

    short* arr = new short[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    short s, t;
    cin>>s>>t;
    if(s>t){
        short t1 = s;
        s = t;
        t = t1;
    }
    short way1 = 0;
    for(int i=s-1; i<t-1; i++)way1 += arr[i];
    short way2 = 0;
    for(int i=t-1; i<n; i++)way2 += arr[i];
    short s2 = s == 1 ? s - 2 : s - 1;
    for(int i=0; i<s2; i++)way2 += arr[i];

    cout<<min(way1, way2);

    delete[] arr;

    return 0;
}
