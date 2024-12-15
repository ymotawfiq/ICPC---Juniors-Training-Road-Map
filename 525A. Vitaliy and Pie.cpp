
/*
problem link --> https://codeforces.com/contest/525/problem/A
*/

#include <iostream>
#include <string>
using namespace std;


int main(){

    int n, c=0;
    cin>>n;

    string s;
    cin>>s;

    int keys[26]{0};
    int doors[26]{0};

    for(int i=0; i<s.length(); i++){
        if(s[i]>='A'&&s[i]<='Z'){
            doors[s[i] - 'A'] = 0;
            if(!keys[tolower(s[i]) - 'a']){
                c++;
            }
            else {
                keys[tolower(s[i]) - 'a'] -= 1;
            }
        }
        else {
            keys[s[i] - 'a'] += 1;
        }
        
    }


    for(int i=0; i<26; i++){
        if(doors[i] != 0 &&
        doors[i] > keys[i])c += doors[i] - keys[i];
    }

    cout<<c;


    return 0;
}
