

/*
problem link ----> https://codeforces.com/contest/382/problem/A
*/


#include <iostream>
#include <string>
using namespace std;

int main(){

    string s1;
    string s2;
    cin>>s1>>s2;

    int delemiter = s1.find("|");
    string leftPan, rightPan;    

    leftPan = s1.substr(0, delemiter);
    rightPan = s1.substr(delemiter + 1);

    for(int i=0; i<s2.length(); i++){
        if(leftPan.length() < rightPan.length()) leftPan += s2[i];
        else rightPan += s2[i];
    }

    if(leftPan.length() != rightPan.length()) cout<<"Impossible";

    else cout<<leftPan<<"|"<<rightPan;
    
    return 0;
}