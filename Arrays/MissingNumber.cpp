#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size(); 
    int totalSum = 0; 
    for(int i=0;i<=n;i++){
        totalSum += i; 
    }

    int ArraySum = 0; 
    for(int i=0;i<n;i++){
        ArraySum += nums[i]; 
    }

    return (totalSum-ArraySum);  // TC = O(N)
}

/*int missingNumber(vector<int>& nums) {
    int n = nums.size(); 
    vector<bool> flag(n,false); 
    for(int i=0;i<n;i++){
        flag[nums[i]] = true;
    }
    for(int i=0;i<n;i++){
        if(flag[i]==false) return i; 
    }
    return n; 
}*/

/*int missingNumber(vector<int>& nums) {
    int n = nums.size(); 

    for(int i=0;i<=n;i++){
        bool flag = false; 
        for(int ele : nums){
            if(i==ele){
                flag = true; 
                break; 
            } 
        }
    if(flag==false) return i; 
    }
    return 101; 
}*/

int main(){
    vector<int> arr = {3,0,1}; 
    cout<<"Missing Number is: "<<missingNumber(arr); 
    return 0; 
}