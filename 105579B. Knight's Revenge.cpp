
/*
problem link ----> https://codeforces.com/gym/105579/problem/B
*/

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

struct stPosition{
    short x, y;
};

short is_knight_move_available(char arr[10][10], const stPosition& p,
 const short board_size = 10){
    if(p.x < 0 || p.y < 0 || p.x >= board_size || p.y >= board_size)return 0;
    if(arr[p.y][p.x] == '.')return 0;
    return 1;
}

short get_knight_moves(char arr[10][10], const stPosition& p){
    stPosition p1;
    short c = 0;
    p1.x = p.x - 2;
    p1.y = p.y - 1;
    if(is_knight_move_available(arr, p1))c++;
    p1.x = p.x - 2;
    p1.y = p.y + 1;
    if(is_knight_move_available(arr, p1))c++;
    p1.x = p.x - 1;
    p1.y = p.y - 2;
    if(is_knight_move_available(arr, p1))c++;
    p1.x = p.x - 1;
    p1.y = p.y + 2;
    if(is_knight_move_available(arr, p1))c++;
    p1.x = p.x + 2;
    p1.y = p.y - 1;
    if(is_knight_move_available(arr, p1))c++;
    p1.x = p.x + 2;
    p1.y = p.y + 1;
    if(is_knight_move_available(arr, p1))c++;
    p1.x = p.x + 1;
    p1.y = p.y - 2;
    if(is_knight_move_available(arr, p1))c++;
    p1.x = p.x + 1;
    p1.y = p.y + 2;
    if(is_knight_move_available(arr, p1))c++;
    return c;
}

int main(){
    char arr[10][10];
    short maxx = -1;
    vector<stPosition> po;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cin>>arr[i][j];
            if(arr[i][j] == '.'){
                stPosition p;
                p.x = j;
                p.y = i;
                po.push_back(p);
            }
        }
    }
    for(int i=0; i<po.size(); i++){
        maxx = max(maxx, get_knight_moves(arr, po[i]));
    }
    cout<<maxx;

    return 0;
}
