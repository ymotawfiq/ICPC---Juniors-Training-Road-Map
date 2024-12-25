

/*
problem link ----> https://codeforces.com/contest/474/problem/A
*/


#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

void getPosition(const string keyboard[3], const char& ch, int& x, int& y){
    bool flag = false;
    for(int i=0; i<3; i++){
        for(int j=0; j<keyboard[i].length(); j++){
            if(ch == keyboard[i][j]){
                x = i;
                y = j;
                return;
            }
        }
    }
}

int main(){


    string keyboard [3] = {"qwertyuiop", "asdfghjkl;", "zxcvbnm,./"};

    int x = 0, y = 0;
    getPosition(keyboard, 's', x, y);

    char direction;
    cin>>direction;

    string s;
    cin>>s;
    char* ans = new char[s.length() + 1];
    ans[s.length()] = '\0';

    for(int i=0; i<s.length(); i++){
        int x, y;
        getPosition(keyboard, s[i], x, y);
        if(direction == 'R'){
            ans[i] = keyboard[x][y-1];
        }
        else{
            ans[i] = keyboard[x][y+1];
        }
    }

    cout<<ans;

    return 0;
}