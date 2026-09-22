#include<iostream>
using namespace std;

int main(){
    int arr[7]; // static allocation
    int* brr = new int[7]; // dynamic allocation -> runtime mein bnti hai
    brr[0] = 4; 
    cout<<brr[0]; 
    return 0; 
}