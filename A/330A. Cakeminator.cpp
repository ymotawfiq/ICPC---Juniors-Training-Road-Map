

/*
problem link ----> https://codeforces.com/contest/148/problem/A
*/


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


short rowNotContainsDevil(char* arr, short size){
    for(int i=0; i<size; i++){
        if(arr[i] == 'S')return 0;
    }
    for(int i=0; i<size; i++)arr[i] = '0';
    return size;
}

short columnNotContainsDevil(char** arr, short c, short size){
    for(int i=0; i<size; i++){
        if(arr[i][c] == 'S')return 0;
    }
    short c1 = 0;
    for(int i=0; i<size; i++){
        if(arr[i][c] != '0'){
            c1++;
            arr[i][c] = '0';
        }
    }
    return c1;
}

void readString(char* arr, short size){
    for(int i=0; i<size; i++)cin>>arr[i];
}

int main(){

    short r, c;
    cin>>r>>c;
    char** arr = new char*[r];
    short counter = 0;
    for(int i=0; i<r; i++){
        arr[i] = new char[c];
        readString(arr[i], c);
        counter += rowNotContainsDevil(arr[i], c);
    }

    for(int i=0; i<c; i++){
       counter += columnNotContainsDevil(arr, i, r); 
    }

    cout<<counter;

    for(int i=0; i<r; i++)delete[] arr[i];

    delete[] arr;
    
    return 0;
}
