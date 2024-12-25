

/*
problem link ----> https://codeforces.com/contest/266/problem/A
*/


#include <iostream>

using namespace std;

void read_number_of_stones(short& n){
    cin>>n;
}

void read_stones_and_get_answer(char* stones, const short& size, short& ans){
    if(size == 1){
        ans = 0;
        return;
    }
    for(short i=0; i<size; i++){
        cin>>stones[i];
        if(i!=0){
            if(stones[i-1] == stones[i]){
                ans++;
            }
        }
    }
}



int main(){

    short number_of_stones;
    read_number_of_stones(number_of_stones);
    char* stones;
    stones = new char[number_of_stones];
    short ans = 0;
    read_stones_and_get_answer(stones, number_of_stones, ans);

    cout<<ans;

    delete[] stones;

    return 0;
}