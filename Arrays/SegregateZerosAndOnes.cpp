#include<iostream>
#include<vector>
using namespace std;

void Segregate0And1(vector<int>&arr){
    int n = arr.size(); 
    int i=0;
    int j=n-1; 
    while(i<j){
        if(arr[i]==0) i++; 
        else if(arr[j]==1) j--; 
        else{
            swap(arr[i],arr[j]); 
            i++;
            j--;
        }
    }
}

void segregate0and1(vector<int> &arr) {
        // code here
    int zeros = 0; 
    int ones = 0; 
    int n = arr.size(); 
        
    for(int i=0;i<n;i++){
        if(arr[i]==0) zeros++; 
        else ones++; 
    }
        
    for(int i=0;i<zeros;i++){
        arr[i] = 0; 
    }
        
    for(int i=zeros;i<n;i++){
        arr[i] = 1; 
    }
}

void PrintArray(vector<int>&arr){
    int n = arr.size(); 
    for(int i=0;i<n;i++){   
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
}

int main(){
    vector<int> arr =  {0, 1, 0, 1, 0, 0, 1, 1, 1, 0}; 
    PrintArray(arr); 
    Segregate0And1(arr); 
    PrintArray(arr); 
    return 0; 
}