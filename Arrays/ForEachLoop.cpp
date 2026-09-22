#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={4,3,8,2,9};


    // for each loop
    // for(int ele : v){ // : -> means in
    //     cout<<ele<<" "; 
    // }

    // multiply even numbers by 2 and square the odd number
    // for(int i=0;i<v.size();i++){
    //     if(v[i]%2==0){
    //         v[i] *= 2; 
    //     }else{
    //         v[i] *= v[i]; 
    //     }
    // }

    for(int ele : v){ // yeh sirf print krne ke kaam aata elements ko 
        if(ele % 2 == 0){
            ele *= 2; 
        }else{
            ele *= ele; 
        }
    }
    // iss loop se hum array mein koi changes nahi kr skte

    // for each loop
    for(int ele : v){ // : -> means in
        cout<<ele<<" "; 
    }
    return 0; 
}