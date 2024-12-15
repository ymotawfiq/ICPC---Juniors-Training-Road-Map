
/*
problem link --> https://codeforces.com/contest/711/problem/A
*/

#include <iostream>
#include <string>
using namespace std;


int main(){

    const short seats = 5;
    short n;
    cin>>n;
    short flag = 0;

    char** arr = new char*[n];
    for(int i=0; i<n; i++){
        arr[i] = new char[seats];
        cin>>arr[i];
        if(!flag && arr[i][0] == 'O' && arr[i][1] == 'O'){
            flag = 1;
            arr[i][1] = arr[i][0] = '+';
        }
        if(!flag && arr[i][3] == 'O' && arr[i][4] == 'O'){
            flag = 1;
            arr[i][4] = arr[i][3] = '+';
        }
    }
    if(flag){
        cout<<"YES\n";
        for(int i=0; i<n; i++){
            for(int j=0; j<seats; j++){
                cout<<arr[i][j];
            }
            delete[] arr[i];
            cout<<endl;
        }
    }
    else{
        cout<<"NO";
    }

    delete[] arr;
    return 0;
}
