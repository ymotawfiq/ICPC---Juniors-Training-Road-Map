

/*
problem link ----> https://codeforces.com/contest/16/problem/B
*/


#include <iostream>
#include <string>
using namespace std;

string sum_of_digits(const string& s){
    int sum = 0;
    for(int i=0; i<s.length(); i++) sum += (s[i] - '0');
    return to_string(sum);
}

int main(){
    string s;cin>>s;
    short ans = 0;
    while(s.length() > 1){
        s = sum_of_digits(s);
        ans++;
    }
    cout<<ans;
    return 0;
}
