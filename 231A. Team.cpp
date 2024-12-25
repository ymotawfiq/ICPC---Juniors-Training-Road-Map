

/*
problem link ----> https://codeforces.com/contest/231/problem/A
*/


#include <iostream>
using namespace std;

void read_first_input_total_number_of_problems(short& n){
    cin>>n;
}

void read_line_by_line_and_increase_answer(bool arr[3], short& ans){
    cin>>arr[0]>>arr[1]>>arr[2];
    if(
        (arr[0]&&arr[1]) 
        || (arr[0]&&arr[2]) 
        || (arr[1]&&arr[2])){
        ans++;
    }
}

void calculate_number_of_problems(short& ans){
    bool arr[3] = {0};
    short total_number_of_problems;
    read_first_input_total_number_of_problems(total_number_of_problems);
    while(total_number_of_problems--){
        read_line_by_line_and_increase_answer(arr, ans);
    }
}

int main(){

    short ans = 0;
    calculate_number_of_problems(ans);
    cout<<ans;

    return 0;
}