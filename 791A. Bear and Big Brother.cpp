

/*
problem link ----> https://codeforces.com/contest/791/problem/A
*/


#include <iostream>
#include <string>
using namespace std;

void readInput(short& limak_weight, short& bob_weight){
    cin>>limak_weight>>bob_weight;
}

short calculate_years(){
    short limak_weight = 0, bob_weight = 0;
    readInput(limak_weight, bob_weight);
    short ans = 0;
    while(limak_weight<=bob_weight){
        limak_weight *= 3;
        bob_weight *= 2;
        ans++;
    }
    return ans;
}

int main(){


    cout<<calculate_years();


    return 0;
}