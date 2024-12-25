

/*
problem link ----> https://codeforces.com/contest/520/problem/A
*/


#include <iostream>
#include <string>

using namespace std;


int main(){

    int n;
    cin>>n;

    char* word = new char[n+1];
    word[n] = '\0';

    int* alphapet = new int[26]{0};
    int ans = 0;

    for(int i=0; i<n; i++){
        cin>>word[i];
        if(alphapet[toupper(word[i]) - 'A'] == 0){
            alphapet[toupper(word[i]) - 'A'] = toupper(word[i]);
            ans++;
        }
    }

    if(ans >= 26)cout<<"YES";
    else cout<<"NO";


    delete[] word;
    delete[] alphapet;
    return 0;
}