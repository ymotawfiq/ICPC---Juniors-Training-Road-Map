

/*
problem link ----> https://codeforces.com/contest/404/problem/A
*/


#include <iostream>
#include <unordered_set>
#include <cstring>

using namespace std;


int main(){
    
    short n;
    cin>>n;

    short isSuccess = 1;
    char input, ch, ch2;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>input;
            if(i == 0){
                if(j == 0) ch = input;
                else if(j == 1) ch2 = input;
            }
            if(isSuccess){
                if(ch == ch2){
                    isSuccess = 0;
                }
                if(i == j || j == n - 1 - i){
                    if(input != ch){
                        isSuccess = 0;
                    }
            }
            else{
                if(input != ch2){
                        isSuccess = 0;
                    }
                }
            }
        }
    }

    if(isSuccess)cout<<"YES";
    else cout<<"NO";

    return 0;
}