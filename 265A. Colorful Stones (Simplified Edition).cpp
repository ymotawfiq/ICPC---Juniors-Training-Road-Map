

/*
problem link ----> https://codeforces.com/contest/265/problem/A
*/


#include <iostream>
#include <string>
using namespace std;

int main(){

    string stones, instructions;
    cin>>stones>>instructions;

    int n = instructions.length();
    int i, j;
    for(j=0; j<n; j++){
        if(stones[i] == instructions[j]) i++;
    }

    cout<< i + 1;

    return 0;
}