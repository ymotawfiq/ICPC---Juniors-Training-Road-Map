
/*
problem link --> https://codeforces.com/contest/721/problem/A
*/

#include <iostream>
using namespace std;


int main(){

    short n;
    cin>>n;
    string s;
    cin>>s;

    short black[100]{0};
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'B')black[i] = 1;
    }

    short ans[100]{0};
    short c = 1;
    for(int i=0; i<100; i++){
        if(black[i] == 1){
            short j = i;
            short k = 0;
            while(black[j] == 1){
                k++;
                j++;
            }
            i = j;
            ans[c++] = k;
            ans[0]++;
        }
    }
    cout<<ans[0]<<endl;
    for(int i=1; i<100; i++){
        if(ans[i]!=0)cout<<ans[i]<<" ";
    }

    return 0;
}
