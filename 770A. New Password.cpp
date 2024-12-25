

/*
problem link ----> https://codeforces.com/contest/770/problem/A
*/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


bool contains(char* password, const int& length, const char& ch){
    for(int i=0; i<length; i++){
        if(password[i] == ch)return false;
    }
    return true;
}



int main(){

    int passwordLen, distinctCharsLen;

    cin>>passwordLen>>distinctCharsLen;

    char* password = new char[passwordLen + 1];
    char* distChars = new char[distinctCharsLen+1];
    password[passwordLen] = '\0';
    distChars[distinctCharsLen] = '\0';

    int j=0;
    for(char ch='a'; ch< 'a' + distinctCharsLen; ch++){
        distChars[j++] = ch;
    }

    for(int i=0, j=0; i<passwordLen; i++, j++){
        if(j==distinctCharsLen)j=0;
        password[i] = distChars[j];
    }


    cout<<password;


    delete[] password;
    delete[] distChars;


    return 0;
}