#include<iostream>
#include<vector>
using namespace std;

void Reverse(vector<int>&arr){
    int n = arr.size(); 
    int i=0; 
    int j=n-1; 
    while(i<j){
        // int temp = arr[i]; 
        // arr[i] = arr[j];
        // arr[j] = temp; 
        swap(arr[i],arr[j]); 
        i++; 
        j--;
    }
}

void printArray(vector<int>&arr){
    int n = arr.size(); 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl; 
}

int main(){
    vector<int> arr = {10,20,30,40,50,60,70}; 
    int n = arr.size(); 

    printArray(arr); 
    Reverse(arr);
    printArray(arr); 
    return 0; 
}