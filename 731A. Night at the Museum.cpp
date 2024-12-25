

/*
problem link ----> https://codeforces.com/contest/731/problem/A
*/


#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// way1
int getMiniumDistanceBetween2Chars(char ch1, char ch2){
    int c1 = 0, c2 = 0;
    char ch3 = ch1, ch4 = ch2;
    while(ch1!=ch2){
        if(ch1=='z'){
            ch1 = 'a';
            c1++;
        }
        else{
            ch1++;
            c1++;
        }
    }
    ch1 = ch3;
    ch2 = ch4;
    while(ch1!=ch2){
        if(ch1=='a'){
            ch1 = 'z';
            c2++;
        }
        else{
            ch1--;
            c2++;
        }
    }
    return min(c1, c2);
}

// way2
int getMiniumDistanceBetween2Chars2(char ch1, char ch2){
    int c1 = 0, c2 = 0;
    if(ch1>ch2){
        c1 = ch1 - ch2;
        c2 = ch2 - ch1 + 26;
        return min(c1, c2);
    }
    c1 = ch2 - ch1;
    c2 = ch1 - ch2 + 26;
    return min(c1, c2);
}


int main(){

    string s;
    cin>>s;
    int ans = 0;
    for(int i=0; i<s.length(); i++){
        if(i==0){
            ans += getMiniumDistanceBetween2Chars2(s[i], 'a');
        }
        else{
            ans += getMiniumDistanceBetween2Chars2(s[i], s[i-1]);
        }
    }
    cout<<ans;
    return 0;
}