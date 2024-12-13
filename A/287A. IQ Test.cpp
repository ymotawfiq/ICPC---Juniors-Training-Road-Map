/*
problem link ----> https://codeforces.com/contest/287/problem/A
*/


#include <iostream>
#include <cmath>
using namespace std;

int main(){

    string arr[4];
    for(int i=0; i<4; i++){
        cin>>arr[i];
    }

    for(int i=0; i<3; i++){
        int x, y;
        for(int j=0; j<3; j++){
            if(arr[i][j] == arr[i][j+1]){
                char ch1 = arr[i][j];
                char ch2 = arr[i+1][j];
                char ch3 = arr[i+1][j+1];
                if(ch1 == ch2 || ch1 == ch3){
                    cout<<"YES";
                    exit(0);
                }
            }
            else{
                char ch1 = arr[i+1][j];
                char ch2 = arr[i+1][j+1];
                if(ch1 == ch2){
                    cout<<"YES";
                    exit(0);
                }
            }
        }
    }
    cout<<"NO";
    return 0;
}
