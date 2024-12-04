

// /*
// problem link ----> https://codeforces.com/contest/799/problem/A
// */


// #include <iostream>
// #include <string>
// using namespace std;

// int getTimeWithOneOven(int numberOfCakes, int ovenTime, int cakesPerOven){
//     int ans = 0;
//     while(numberOfCakes){
//         numberOfCakes -= cakesPerOven;
//         ans += ovenTime;
//     }
//     return ans;
// }


// int getCakesUntillBuildingOven(int numberOfCakes, int ovenTime, int cakesPerOven, 
//     int timeToBuildOven2){
//     int ans = 0;
//     while(numberOfCakes){
//         numberOfCakes -= cakesPerOven;
//         ans += cakesPerOven;
//         if(ans>=timeToBuildOven2)break;
//     }
//     return ans;
// }

// int main(){

//     int number_of_cakes, time_of_one_oven, number_of_cakes_baked_same_time;
//     int time_to_build_new_oven;

//     cin>>number_of_cakes>>time_of_one_oven>>number_of_cakes_baked_same_time
//         >>time_to_build_new_oven;
    
//     // 8 6 4 5
//     if(number_of_cakes_baked_same_time > number_of_cakes){
//         cout<<"NO";
//         exit(0);
//     }
//     int time1 = 0, time2 = time_to_build_new_oven;
//     int cakes = 0;

//     time1 = getTimeWithOneOven(number_of_cakes, time_of_one_oven, number_of_cakes_baked_same_time);
//     time2 += getTimeWithOneOven(cakes, time_of_one_oven, number_of_cakes_baked_same_time);

//     cout<<time1<<"\t"<<time2<<endl;

//     if(time2 >= time1)cout<<"NO";
//     else cout<<"YES";

//     return 0;
// }