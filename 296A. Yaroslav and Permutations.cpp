/*
problem link ----> https://codeforces.com/contest/296/problem/A
*/


#include <iostream>
#include <map>
using namespace std;

int main(){

    short n;
    cin>>n;
    short* arr = new short[n]{0};
    map<short, short> mp;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        if(mp.find(arr[i]) != mp.end()) mp[arr[i]]++;
        else mp.insert({arr[i], 1});
    }

    map<short, short>::iterator it;
    for(it=mp.begin(); it!=mp.end(); it++){
        if(n % 2 == 0 && it->second > n/2
        ||n % 2 != 0 && it->second > n / 2 + 1){
            cout<<"NO";
            exit(0);
        }
    }

    cout<<"YES";

    delete[] arr;

    return 0;
}
