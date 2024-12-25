

/*
problem link ----> https://codeforces.com/contest/268/problem/A
*/


#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct stGame
{
    short hostTeamColor;
    short guestTeamColor;
};



int main(){

    int number_of_games;
    cin>>number_of_games;

    stGame* games = new stGame[number_of_games];
    int ans;
    for(int i=0; i<number_of_games; i++){
        cin>>games[i].hostTeamColor;
        cin>>games[i].guestTeamColor;
        int j = i - 1;
        while(j>=0){
            stGame currGame = games[i];
            stGame oldGame = games[j];
            if(currGame.hostTeamColor == oldGame.guestTeamColor)ans++;
            if(oldGame.hostTeamColor == currGame.guestTeamColor)ans++;
            j--;
        }
    }

    cout<<ans;

    delete[]games;

    return 0;
}