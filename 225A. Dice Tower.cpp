

/*
problem link ----> https://codeforces.com/contest/225/problem/A
*/


#include <iostream>
#include <vector>

using namespace std;

int main(){

    short n, x;
    cin>>n>>x;
    short flag = 1;
    for(int i=0; i<n; i++){
        short m, l;
        cin>>m>>l;
        if(m == x || m == 7 - x || l == x || l == 7 -x){
            flag = 0;
        }
    }
    if(!flag)cout<<"NO";
    else cout<<"YES";

    return 0;
}
