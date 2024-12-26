

/*
problem link ----> https://codeforces.com/contest/534/problem/A
*/


#include <iostream>
using namespace std;

int main(){
    short n;cin>>n;
    if(n==1)cout<<"1\n1";
    else if(n==2)cout<<"1\n1";
    else if(n==3)cout<<"2\n"<<"1 3";
    else if(n==4)cout<<"4\n2 4 1 3";
    else{
        cout<<n<<endl;
        for(int i=1; i<=n; i++){
            if(i%2!=0)cout<<i<<" ";
        }
        for(int i=2; i<=n; i++){
            if(i%2==0)cout<<i<<" ";
        }
    }
    return 0;
}
