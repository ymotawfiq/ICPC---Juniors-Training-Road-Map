

/*
problem link ----> https://codeforces.com/contest/294/problem/A
*/


#include <iostream>
#include <string>
using namespace std;


struct stShot{
    int x, y;
};

int main(){


    int number_of_wires;

    cin>>number_of_wires;

    int* wires = new int[number_of_wires];

    for(int i=0; i<number_of_wires; i++){
        cin>>wires[i];
    }

    int number_of_shots;
    cin>>number_of_shots;

    stShot* shots = new stShot[number_of_shots];


    for(int i=0; i<number_of_shots; i++){
        cin>>shots[i].x >>shots[i].y;
        shots[i].x--;
    }

    for(int i=0; i<number_of_shots; i++){
        stShot shot = shots[i];
        if(shot.x - 1 >=0){
            wires[shot.x - 1] += shot.y - 1;
        }
        if(shot.x + 1 < number_of_wires){
            wires[shot.x + 1] += wires[shot.x] - shot.y;
        }
        wires[shot.x] = 0;
    }


    for(int i=0; i<number_of_wires; i++){
        cout<<wires[i]<<endl;
    }


    delete[] wires;
    delete[] shots;

    return 0;
}