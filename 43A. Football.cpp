

/*
problem link ----> https://codeforces.com/contest/43/problem/A
*/


#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;


void readTeamName(char* team, const short& size){
    for(int i=0; i<size; i++){
        char ch = getchar();
        if(ch=='\n'){
            team[i] = '\0';
            break;
        }
        else{
            team[i] = ch;
        }
    }
}

int main(){

    const short len = 10;
    short n, c1=0, c2=0;
    char team1[len + 1]="", team2[len + 1]="";
    cin>>n;
    getchar();
    if(n == 1){
        readTeamName(team1, len+1);
        cout<<team1;
        return 0;
    }
    readTeamName(team1, len+1);
    readTeamName(team2, len+1);
    if(strcmp(team1, team2) != 0){
        c1++;
        c2++;
    }
    else{
        c1 += 2;
        team2[0] = '\0';
    }
    for(int i=2; i<n; i++){
        char team[len+1];
        readTeamName(team, len+1);
        if(strcmp(team, team1) == 0)c1++;
        else {
            if(team2[0] == '\0')strcpy(team2, team);
            c2++;
        }
    }

    if(c1>c2)cout<<team1;
    else cout<<team2;

    return 0;
}