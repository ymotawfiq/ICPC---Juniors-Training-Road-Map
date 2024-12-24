
/*
problem link --> https://codeforces.com/contest/6/problem/B
*/

#include <iostream>
#include <set>
using namespace std;

short correct(int i, int j, int n, int m){
    return (i>=0 && i<n) && (j>=0 && j<m);
}

int xAccess[]{-1,0,1,0}; 
int yAccess[]{0,1,0,-1}; 

int main(){
    set<char> se;
    short n, m;cin>>n>>m;
    char ch;cin>>ch;
    int ans = 0;
    char arr[101][101];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)cin>>arr[i][j];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == ch){
                for(int k=0; k<4; k++){
                    int x = i+xAccess[k];
                    int y = j+yAccess[k];
                    if(correct(x, y, n, m) && arr[x][y]!=ch && arr[x][y]!='.')se.insert(arr[x][y]);
                }
            }
        }
    }
    cout<<se.size();
    return 0;
}
