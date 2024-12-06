

/*
problem link ----> https://codeforces.com/contest/71/problem/A
*/


#include <iostream>
#include <set>
#include <string>

using namespace std;



int main(){

    int n;
    cin>>n;

    string* words = new string[n];
    int i=0, j=n;

    while(n--){
        string s;
        cin>>s;
        int n = s.length()-2;
        if(n < 9){
            words[i] = s;
        }
        else{
            words[i] = s[0] + to_string(n) + s[s.length()-1];
        }
        i++;
    }

    for(int k=0; k<j; k++){
        cout<<words[k]<<endl;
    }

    delete[] words;

    return 0;
}