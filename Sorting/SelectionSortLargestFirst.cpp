#include<iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    } 
    cout<<endl; 
}

void SelectionSort(int arr[],int n){ 
    for(int i=0;i<n-1;i++){ 
        int max = arr[0]; 
        int maxIdx = 0; 
        for(int j=0;j<n-i;j++){
            if(arr[j]>max){
                max = arr[j]; 
                maxIdx = j; 
            }
        }
        swap(arr[n-i-1],arr[maxIdx]); 
    }
}

int main(){
    int arr[] = {7,4,9,1,3,6,2,5}; 
    int n = sizeof(arr)/sizeof(int); 

    print(arr,n); 
    SelectionSort(arr,n); 
    print(arr,n); 
    return 0; 
}