
/*
problem link --> https://codeforces.com/contest/454/problem/A
*/

#include <iostream>
using namespace std;


int main(){

    short x;
    cin>>x;

    for(int i=1; i<=x/2; i++){
        for(int j=x/2; j>=i; j--){
            cout<<"*";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<"D";
        }
        for(int j=i; j<=x/2; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<=x; i++)cout<<"D";
    cout<<endl;
    
    int k = 1;
    for(int i=x/2; i>=1; i--){
        for(int j=1; j<=k; j++)cout<<"*";
        for(int j=2*i-1; j>=1; j--)cout<<"D";
        for(int j=1; j<=k; j++)cout<<"*";
        k++;
        cout<<endl;
    }

    return 0;
}
