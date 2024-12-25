

/*
problem link ----> https://codeforces.com/contest/492/problem/A
*/


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 0, j = 1, c = 0;
    while(n > 0){
        i += j;
        n -= i;
        j++;
        if(n>=0) c++;
    }

    cout<<c;

    return 0;
}
