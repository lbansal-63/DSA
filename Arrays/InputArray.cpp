#include<iostream>
using namespace std;

int main(){
    int n; 
    cout<<"Enter the size of an array: "; 
    cin>>n; 

    // declare an array
    int arr[n]; 

    //taking the input of elements
    cout<<"Enter the elements of an array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
    }

    //printing the -ve elements of an array
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            cout<<arr[i]<<" "; 
        }
    }
    return 0; 
}