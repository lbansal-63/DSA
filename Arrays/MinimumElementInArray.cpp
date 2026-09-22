#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {74,96,9,57,62,35,5,1,88,34,90,103}; 

    int n = sizeof(arr)/sizeof(int); 

    // int min = INT_MAX;
    int mn = arr[0];
    for(int i=0;i<n;i++){
        // if(arr[i]<min){
        //     min = arr[i]; 
        // }
        mn = min(mn,arr[i]);
    }

    cout<<"Minimum element in the array is: "<<mn<<endl; 
    return 0; 
}