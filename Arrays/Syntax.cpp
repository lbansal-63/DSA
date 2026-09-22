#include<iostream>
using namespace std;

int main(){
    int marks[] = {74,96,91,57,62,35,45,12,98,37};

    cout<<sizeof(marks)/sizeof(int)<<endl; 
    //cout<<size(marks)<<endl; // this gives error in new version 

    cout<<marks[2]<<endl;  // print the value of array
    marks[2] = 23; // update the value of array
    cout<<marks[2]<<endl; 
    cout<<marks[4]<<endl; 

    // cin>>marks[2]; 
    // cout<<marks[2]<<endl;
    return 0; 
}