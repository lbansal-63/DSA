#include<iostream>
using namespace std;

int main(){
    int arr[] = {74,96,9,57,62,35,7,12,5,1,88,34,22,63}; 

    int n = sizeof(arr)/sizeof(int); 
    // traversing the array     
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
    return 0; 
}