#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>&nums,int i,int j){
        while(i<j){
            swap(nums[i],nums[j]); 
            i++;
            j--; 
        }
}

void rotate(vector<int>& nums, int k) {
    int n = nums.size(); 
    k = k % n;  // bcz if k is greater the number of elements it repeats
    reverse(nums,0,n-1); 
    reverse(nums,0,k-1);
    reverse(nums,k,n-1); 
}

void printArray(vector<int>&arr){
    int n = arr.size(); 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl; 
}

int main(){
    vector<int> arr = {8,0,5,1};
    int k = 70; 
    printArray(arr); 
    rotate(arr,k);  
    printArray(arr); 
    return 0; 
}