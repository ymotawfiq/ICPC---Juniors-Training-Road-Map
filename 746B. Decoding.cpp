

/*
problem link ----> https://codeforces.com/contest/746/problem/B
*/


#include <iostream>
#include <cstring>
using namespace std;

typedef long long ll;

void reverse(char* word, const short& n){
    for(int i=0, j=n-1; i<j; i++, j--){
        char ch = word[i];
        word[i] = word[j];
        word[j] = ch;
    }
}

int main(){
    short n;cin>>n;
    char* word = new char[n+1];
    char* ans = new char[n+1];
    for(int i=0; i<n; i++)cin>>word[i];
    word[n] = '\0';
    ans[n / 2] = word[0];
    short j = 1;
    for(int i=1; i<n; i++){
        if(i % 2 != 0)ans[n/2-j]=word[i];
        else{
            ans[n/2+j]=word[i];
            j++;
        }
    }
    ans[n] = '\0';
    if(n%2 == 0)reverse(ans, n);
    cout<<ans;
    delete[] word;
    delete[] ans;
    return 0;
}
