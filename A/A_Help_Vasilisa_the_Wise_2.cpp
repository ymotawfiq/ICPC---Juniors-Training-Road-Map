

/*
problem link ----> https://codeforces.com/contest/143/problem/A
*/


#include <iostream>
#include <string>
using namespace std;

int main(){

    short r1, r2, c1, c2, d1, d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;

    short n1 = 1, n2 = 1, n3 = 1, n4 = 1;

    for(int i=1; i<=20; i++){
        for(int j=1; j<=20; j++){
            if(n1 + n2 == r1 && n3 + n4 == r2 && n1 + n3 == c1 && n2 + n4 == c2
            && n1 + n4 == d1 && n2 + n3 == d2)break;
            
        }
    }

    cout<<n1<<" "<<n2<<endl<<n3<<" "<<n4<<endl;

    return 0;
}