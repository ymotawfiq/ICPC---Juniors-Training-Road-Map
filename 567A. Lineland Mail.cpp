

/*
problem link ----> https://codeforces.com/contest/567/problem/A
*/


#include <iostream>
#include <cmath>

using namespace std;

struct stDistance{
    int min, max;
};

int main(){


    int nCities;
    cin>>nCities;

    int* arr = new int[nCities];
    for(int i=0; i<nCities; i++){
        cin>>arr[i];
    }

    stDistance* distances = new stDistance[nCities];
    for(int i=0; i<nCities; i++){
        if(i == 0){
            distances[i].min = abs(arr[i] - arr[i+1]);
            distances[i].max = abs(arr[i] - arr[nCities - 1]);
        }
        else if(i == nCities - 1){
            distances[i].min = abs(arr[i] - arr[i-1]);
            distances[i].max = abs(arr[i] - arr[0]);
        }
        else{
            distances[i].max = max(abs(arr[i]-arr[nCities-1]), abs(arr[i]-arr[0]));
            distances[i].min = min(abs(arr[i] - arr[i-1]), abs(arr[i] - arr[i+1]));
        }
        cout<<distances[i].min<<" "<<distances[i].max<<endl;
    }

    delete[] arr;
    delete[] distances;

    return 0;
}