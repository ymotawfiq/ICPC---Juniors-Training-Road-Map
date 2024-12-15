

/*
problem link ----> https://codeforces.com/contest/384/problem/A
*/


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    short n;
    cin>>n;
    char** ans = new char*[n];
    int c = 0;
    for(int i=0; i<n; i++){
        ans[i] = new char[n];
        int curr;
        if(i % 2 == 0)curr = 0;
        else curr = 1;
        for(int j=0; j<n; j++){
            if(curr == j){
                c++;
                ans[i][j] = 'C';
                curr += 2;
            }
            else ans[i][j] = '.';
        }
    }
    cout<<c<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<ans[i][j];
        }
        cout<<endl;
        delete[] ans[i];
    }

    delete[] ans;
    return 0;
}
