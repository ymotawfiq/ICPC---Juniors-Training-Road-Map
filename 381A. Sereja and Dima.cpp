

/*
problem link ----> https://codeforces.com/contest/381/problem/A
*/


#include <iostream>

using namespace std;

void read_number_of_cards(short& n){
    cin>>n;
}

void read_cards(short* cards, const short& size){
    for(short i=0; i<size; i++){
        cin>>cards[i];
    }
}

void calculate_answer(short* cards, const short& size, int ans[2]){
    char curr = '1';
    for(short i=0, j=size-1; i<=j;){
        if(curr == '1'){
            if(cards[i]>cards[j]){
                ans[0] += cards[i];
                i++;
            }
            else {
                ans[0] += cards[j];
                j--;
            }
            curr = '2';
        }
        else{
            if(cards[i]>cards[j]){
                ans[1] += cards[i];
                i++;
            }
            else {
                ans[1] += cards[j];
                j--;
            }
            curr = '1';
        }
    }
}

int main(){

    short number_of_cards;
    read_number_of_cards(number_of_cards);
    short* cards = new short[number_of_cards];
    int ans[2] = {0};
    read_cards(cards, number_of_cards);
    calculate_answer(cards, number_of_cards, ans);

    cout<<ans[0]<<" "<<ans[1];

    delete[]cards;
    return 0;
}