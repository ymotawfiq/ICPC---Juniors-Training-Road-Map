

/*
problem link ----> https://codeforces.com/contest/734/problem/A
*/


#include <iostream>
#include <string>
using namespace std;

int main(){

    int number_of_games=0;
    cin>>number_of_games;

    string game_results;
    cin>>game_results;

    int anton_winning_games=0, danik_winning_games=0;

    for(char ch : game_results){
        if(ch=='A')anton_winning_games++;
        else danik_winning_games++;
    }

    if(anton_winning_games>danik_winning_games){
        cout<<"Anton";
    }
    else if(danik_winning_games>anton_winning_games){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }

    return 0;
}