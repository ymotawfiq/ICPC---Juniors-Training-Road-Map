

/*
problem link ----> https://codeforces.com/contest/141/problem/A
*/


#include <iostream>

using namespace std;


int main(){
    short map1[26]{0}, map2[26]{0};
    string s1, s2, s3;
    cin>>s1>>s2>>s3;
    if(s3.length() != s1.length() + s2.length()){
        cout<<"NO";
        return 0;
    }
    int i, j, k;
    i=j=k=0;
    while(k < s3.length()){
        if(i<s1.length())map1[s1[i]-'A']++;
        if(j<s2.length())map1[s2[i]-'A']++;
        if(k<s3.length())map2[s3[i]-'A']++;
        i++;j++;k++;
    }
    for(i=0; i<26; i++){
        if(map1[i] != map2[i]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

    return 0;
}