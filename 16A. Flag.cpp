

/*
problem link ----> https://codeforces.com/contest/148/problem/A
*/


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void readString(char* arr, short size){
    for(int i=0; i<size; i++)cin>>arr[i];
}

int main(){

    short n, m, ans = 0;
    cin>>n>>m;
    char** input = new char*[n];
    for(int i=0; i<n; i++){
        input[i] = new char[m];
        readString(input[i], m);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m-1; j++){
            if(input[i][j] != input[i][j+1]){
                cout<<"NO";
                return 0;
            }
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n-1; j++){
            if(input[j][i] == input[j+1][i]){
                cout<<"NO";
                return 0;
            }
        }
    }
    
    cout<<"YES";

    for(int i=0; i<n; i++)delete[] input[i];
    delete[] input;


    return 0;
}
