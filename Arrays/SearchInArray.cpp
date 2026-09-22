#include<iostream>
using namespace std;

int main(){ // linear search
    int arr[] = {74,96,9,57,62,35,5,1,88,34,90,103}; 

    int n = sizeof(arr)/sizeof(int); 
    int target = 35; 
    bool flag = false; 
    for(int i=0;i<n;i++){
        if(target==arr[i]){
            flag = true; 
            break; 
        }
    }

    if(!flag){
        cout<<"Target element is not present"<<endl; 
    }else{
        cout<<"Target element is present"<<endl; 
    }
    return 0;   
}