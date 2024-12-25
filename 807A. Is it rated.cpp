

/*
problem link ----> https://codeforces.com/contest/807/problem/A
*/


#include <iostream>
#include <unordered_set>

using namespace std;

int main(){


    short n;
    cin>>n;

    short *nums1, *nums2;
    nums1 = new short[n]{0};
    nums2 = new short[n]{0};
    bool isRated = false;
    for(int i=0; i<n; i++){
        cin>>nums1[i]>>nums2[i];
        if(nums1[i] != nums2[i])isRated = true;
    }
    bool isUnrated = false;
    if(isRated)cout<<"rated";
    else{
        for(int i=0; i<n - 1; i++){
            if(nums2[i] < nums2[i+1]){
                isUnrated = true;
                break;
            }
        }
        if(isUnrated)cout<<"unrated";
        else cout<<"maybe";
    }

    delete[] nums1;
    delete[] nums2;

    return 0;
}