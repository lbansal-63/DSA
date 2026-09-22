#include<iostream>
using namespace std;

int main(){
    int arr[] = {74,96,9,57,62,35,5,1,88,34,90,103}; 

    int n = sizeof(arr)/sizeof(int); 

    int prod = 1; 

    for(int i=0;i<n;i++){
        prod *= arr[i]; 
    } 
    
    cout<<"Product of elements: "<<prod<<endl; 
    return 0; 
}