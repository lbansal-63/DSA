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
        int min = arr[i]; 
        int minIdx = i; 
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min = arr[j]; 
                minIdx = j; 
            }
        }
        swap(arr[i],arr[minIdx]); 
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