

/*
problem link ----> https://codeforces.com/contest/53/problem/A
*/

#include <iostream>
#include <string>

using namespace std;


int main(){
    string s;cin>>s;
    short n;cin>>n;
    string* ss = new string[n];
    for(int i=0; i<n; i++)cin>>ss[i];
    int c = 0;
    int j = 0;
    for(int i=0; i<n; i++){
        if(ss[i] == s){
            cout<<s;
            return 0;
        }
        int f = ss[i].find(s);
        if(f != string::npos){
            if(j == 0)j = i;
            else if(ss[i] < ss[j])j = i;
        }
        if(f != 0)c++;
    }
    if(c == n)cout<<s;
    else cout<<ss[j];
    delete[]ss;
    return 0;
}
