

/*
problem link ----> https://codeforces.com/contest/427/problem/A
*/


#include <iostream>

using namespace std;

void read_number_of_events(int& n){
    cin>>n;
}

void read_events_and_get_answer(int* events, const int& size, int& ans){
    if(size == 1){
        cin>>events[0];
        if(events[0] == -1)ans++;
        return;
    }
    for(int i=0; i<size; i++){
        cin>>events[i];
        if(i!=0){
            if(events[i] == -1){
                if(events[i-1] + events[i] >= 0){
                    events[i] = events[i-1] + events[i];
                }
                else{
                    ans++;
                }
            }
            else if(events[i] != -1 && events[i-1] != -1) {
                events[i] = events[i-1] + events[i];
            }
        }
        else{
            if(events[i] == -1)ans++;
        }
    }
}


int main(){

    int number_of_events;
    read_number_of_events(number_of_events);

    int* events = new int[number_of_events];
    int ans = 0;
    read_events_and_get_answer(events, number_of_events, ans);
    cout<<ans;


    delete[] events;

    return 0;
}