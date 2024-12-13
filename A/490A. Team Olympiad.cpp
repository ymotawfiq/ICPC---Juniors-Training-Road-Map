/*
problem link ----> https://codeforces.com/contest/490/problem/A
*/
 
 
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
 
int main(){
 
    int n;
    cin>>n;
 
    vector<int> a, b, c;
 
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        if(k==1)a.push_back(i);
        else if(k==2)b.push_back(i);
        else c.push_back(i);
    }
 
 
    int nTeams = min({a.size(), b.size(), c.size()});
 
    cout<<nTeams<<endl;
 
    for(int i=0; i<nTeams; i++){
        cout<<a[i] + 1 << " " << b[i] + 1 << " " << c[i] + 1 << endl;
    }
 
 
    return 0;
}