
/*
problem link --> https://codeforces.com/contest/271/problem/A
*/

#include <iostream>
#include <cmath>
using namespace std;

short isBeautifulYear(short year){
    short arr[10]{0};
    while(year){
        arr[year % 10]++;
        year /= 10;
    }
    for(int i=0; i<10; i++){
        if(arr[i] > 1)return 0;
    }
    return 1;
}

int main(){

    short year;
    cin>>year;

    short i = year+1;
    while(i){
        if(isBeautifulYear(i)){
            cout<<i;
            break;
        }
        i++;
    }

    return 0;
}
