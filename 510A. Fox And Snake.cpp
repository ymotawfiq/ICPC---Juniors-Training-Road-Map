
/*
problem link --> https://codeforces.com/contest/510/problem/A
*/

#include <iostream>
#include <string>
using namespace std;


int main(){

    short n, m;
    cin>>n>>m;

    short flag = 1;

    for(int i=0; i<n; i++){
        if(flag && i % 2 != 0){
            for(int i=0; i<m; i++){
                if(i == m-1)cout<<"#\n";
                else cout<<".";
            }
            flag = 0;
        }
        else if(!flag && i % 2 != 0){
            for(int i=0; i<m; i++){
                if(i == 0)cout<<"#";
                else cout<<".";
            }
            cout<<endl;
            flag = 1;
        }
        else{
            for(int i=0; i<m; i++){
                cout<<"#";
            }
            cout<<endl;
        }
    }


    return 0;
}
