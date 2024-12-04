

/*
problem link ----> https://codeforces.com/contest/766/problem/A
*/


#include <iostream>
#include <string>

using namespace std;

struct stDistance{
    int min, max;
};

int main(){

    int c1 = 0, c2 = 0, l1= 0, l2 = 0;
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    if(s1 == s2){
        cout<<-1;
        return 0;
    }
    else{
        if(s1.length() < s2.length()){
            cout<<s2.length();
            return 0;
        }
        else{
            cout<<s1.length();
            return 0;
        }

    }
    int n = min(s1.length(), s2.length());
    int i;
    for(i=0; i<n; i++){
        if(s1[i] != s2[i]) {
            c1++;
            c2++;
        }
        else{
            l1 = max(c1, l1);
            c1 = 0;
            l2 = max(c2, l2);
            c2 = 0;
        }
    }
    if(l1 < c1) l1 = c1;
    if(l2 < c2) l2 = c2;

    if(l1>l2)cout<<s1.length();
    else cout<<s2.length();
    

    return 0;
}