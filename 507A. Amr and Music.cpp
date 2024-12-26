

/*
problem link ----> https://codeforces.com/contest/507/problem/A
*/


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    short n,k;
    cin>>n>>k;
    vector<pair<int, int>> v;
    for(int i=0; i<n; i++){
        int x;cin>>x;
        v.push_back({x, i+1});
    }
    sort(v.begin(), v.end());
    vector<int>ans;
    for(int i=0; i<n; i++){
        k -= v[i].first;
        if(k<0)break;
        ans.push_back(v[i].second);
    }
    cout<<ans.size()<<endl;
    for(int i=0; i<ans.size(); i++)cout<<ans[i]<<" ";

    return 0;
}