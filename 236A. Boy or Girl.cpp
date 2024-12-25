

/*
problem link ----> https://codeforces.com/contest/236/problem/A
*/


#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;


void readString(string& s){
    cin>>s;
}


short count_distinct_characters(string& s){
    unordered_set<char> st;
    for(int i=0; i<s.length(); i++){
        st.insert(s[i]);
    }
    return st.size();
}

void print_message_by_gender(){
    string s;
    readString(s);
    if(count_distinct_characters(s) % 2 == 0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
}

int main(){

    print_message_by_gender();

    return 0;
}