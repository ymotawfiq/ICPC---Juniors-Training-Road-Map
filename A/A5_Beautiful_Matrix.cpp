

/*
problem link ----> https://codeforces.com/contest/263/problem/A
*/


#include <iostream>
#include <cmath>
using namespace std;

void read_matrix_and_calculate_answer(bool arr[5], const short& size, short& ans){
    short row = 0;
    while(row < size){
        for(int i=0; i<size; i++){
            cin>>arr[i];
            if(arr[i]){
                ans = abs(size/2-i) + abs(size/2-row);
            }
        }
        row++;
    }
}

int main(){

    const short size = 5;
    bool arr[size] = {0};
    short ans=0;
    read_matrix_and_calculate_answer(arr, size, ans);
    cout<<ans;

    return 0;
}