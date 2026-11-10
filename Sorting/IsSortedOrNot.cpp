#include<iostream>
using namespace std;

bool IsSorted(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false; 
        }
    }
    return true; 
}

int main(){
    int arr[] = {1,2,3,4,6,5,7,8};
    int n = 8; 
    bool flag = IsSorted(arr,n);  

    if(!flag){
        cout<<"Array is not Sorted"<<endl; 
    }
    else{
       cout<<"Array is Sorted"<<endl;  
    }
    return 0; 
}