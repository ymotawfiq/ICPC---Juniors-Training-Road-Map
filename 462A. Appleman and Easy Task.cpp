

/*
problem link ----> https://codeforces.com/contest/462/problem/A
*/


#include <iostream>
using namespace std;

int main(){
    short n;cin>>n;
    char board[100][100];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)cin>>board[i][j];
    }
    for(int i=0; i<n; i++){
        int c = 0;
        for(int j=0; j<n; j++){
            if(i-1>=0 && board[i-1][j]=='o')c++;
            if(i+1<n && board[i+1][j]=='o')c++;
            if(j-1>=0 && board[i][j-1]=='o')c++;
            if(j+1<n && board[i][j+1]=='o')c++;
            if(c%2!=0){
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
    return 0;
}
