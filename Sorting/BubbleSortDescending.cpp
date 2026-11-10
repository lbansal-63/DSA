#include<iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    } 
    cout<<endl; 
}

void BubbleSortOptimised(int arr[],int n)
{
    int total = 0; 
    for(int i=0;i<n-1;i++){
        int swaps = 0; 
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaps++; 
            }
        }
        total += swaps; 
        if(swaps==0) break; 
    }
    cout<<"Total Number of swaps in every pass: "<<total<<endl; 
}

int main(){
    int arr[] = {2,1,4,3,5}; 
    int n = 5;
    print(arr,n); 
    BubbleSortOptimised(arr,n);
    print(arr,n);  

    return 0; 
}