#include<iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    } 
    cout<<endl; 
}

void MoveZeroesToEnd(int arr[],int n){ 
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]==0) swap(arr[j],arr[j+1]); 
        }
    }
}

int main(){
    int arr[] = {9,-2,0,0,-4,6,0,7,0}; 
    int n = 9; 

    print(arr,n); 
    MoveZeroesToEnd(arr,n); 
    print(arr,n); 
    return 0; 
}