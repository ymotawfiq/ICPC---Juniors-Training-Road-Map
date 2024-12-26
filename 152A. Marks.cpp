

/*
problem link ----> https://codeforces.com/contest/152/problem/A
*/


#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    short nOfStudents, nOfSubjects;
    cin>>nOfStudents>>nOfSubjects;

    string* marks = new string[nOfStudents];
    for(int i=0; i<nOfStudents; i++)cin>>marks[i];
    
    short* ans = new short[nOfStudents]{0};
    for(int i=0; i<nOfStudents; i++){
        for(int j=0; j<nOfSubjects; j++){
            short c = 1;
            for(int k=0; k<nOfStudents; k++){
                if(k == i)continue;
                if(marks[i][j] >= marks[k][j])c++;
            }
            if(c == nOfStudents){
                ans[i]++;
                break;
            }
        }
    }
    short sum = 0;
    for(int i=0; i<nOfStudents; i++)sum+=ans[i];
    cout<<sum;
    delete[] marks; delete[] ans;
    return 0;
}