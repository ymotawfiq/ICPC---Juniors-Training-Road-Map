

/*
problem link ----> https://codeforces.com/contest/59/problem/A
*/


#include <iostream>
#include <string>

using namespace std;

void read_string(string& s){
    getline(cin, s);
}

void count_lower_and_upper_case(string& s, int& lower_count, int& upper_count){
    for(int i=0; i<s.length(); i++){
        if(isupper(s[i])){
            upper_count++;
        }
        else{
            lower_count++;
        }
    }
}


void solve(string& s){
    int lower_count = 0, upper_count = 0;
    count_lower_and_upper_case(s, lower_count, upper_count);
    for(int i=0; i<s.length(); i++){
        if(upper_count>lower_count){
            if(islower(s[i])){
                s[i] = toupper(s[i]);
            }
        }
        else{
            if(isupper(s[i])){
                s[i] = tolower(s[i]);
            }
        }
    }
}

int main(){

    string s;
    read_string(s);
    solve(s);
    cout<<s;

    return 0;
}