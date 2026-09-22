#include<iostream>
#include<vector>
using namespace std;

 void sortInWave(vector<int>& arr) {
    int n = arr.size(); 
        
    for(int i=0;i<n;i+=2){
        if(i==n-1) continue; 
        swap(arr[i],arr[i+1]); 
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
    vector<int>arr = {2, 4, 7, 8, 9, 10}; 
    printArray(arr); 
    sortInWave(arr); 
    printArray(arr); 
    return 0; 
}