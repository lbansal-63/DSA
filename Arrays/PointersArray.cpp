#include<iostream>
using namespace std;



int main(){
    int* brr = new int[7]; // dynamic allocation -> runtime mein bnti hai
    brr[0] = 4; 
    
    for(int i=0;i<7;i++){
        cout<<brr[i]<<" "; 
    }
    return 0; 
}