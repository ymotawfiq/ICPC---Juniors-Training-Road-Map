

/*
problem link ----> https://codeforces.com/contest/75/problem/A
*/


#include <iostream>
#include <string>

using namespace std;

void remove_zeroes(string& s){
    string s1;
    for(int i=0; i<s.length(); i++){
        if(s[i] != '0')s1 += s[i];
    }
    s = s1;
}

void reverse(string& s){
    for(int i=0, j=s.length()-1; i<j; i++, j--){
        char ch = s[i];
        s[i] = s[j];
        s[j] = ch;
    }
}
string sum_string(string& s1, string& s2){
    string sum;
    if(s1.length() < s2.length()){
        string s3;
        for(int i=0; i<s2.length() - s1.length(); i++)s3 += '0';
        s3.append(s1);
        s1 = s3;
    }
    else{
        string s3;
        for(int i=0; i<s1.length() - s2.length(); i++)s3 += '0';
        s3.append(s2);
        s2 = s3;
    }
    int reminder = 0;
    for(int i=s1.length()-1; i>=0; i--){
        int a = s1[i]-'0';
        int b = s2[i]-'0';
        reminder = reminder + a + b;
        sum += ((reminder % 10) + '0');
        reminder /= 10;
    }
    if(reminder != 0)sum += (reminder + '0');
    reverse(sum);
    return sum;
}

int main(){
    string s1, s2;
    cin>>s1>>s2;
    string sum = sum_string(s1, s2);
    remove_zeroes(s1);
    remove_zeroes(s2);
    remove_zeroes(sum);
    if(sum == sum_string(s1, s2))cout<<"YES";
    else cout<<"NO";

    return 0;
}
