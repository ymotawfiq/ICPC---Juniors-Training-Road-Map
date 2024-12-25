

/*
problem link ----> https://codeforces.com/contest/686/problem/A
*/


#include <iostream>

using namespace std;



int main(){

    unsigned long long n, x;
    cin>>n>>x;

    int y = 0;
    char ch;
    int z;
    while(n--){
        cin>>ch>>z;
        if(ch=='+')x+=z;
        else{
            if(z>x)y++;
            else x -= z;
        }
    }

    cout<<x<<" "<<y;

    return 0;
}