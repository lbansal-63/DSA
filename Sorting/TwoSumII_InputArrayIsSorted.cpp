#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> ans; 
    int n = numbers.size(); 

    int i=0; 
    int j=n-1; 

    while(i<j){
        if(numbers[i]+numbers[j]==target){
            ans.push_back(i+1); 
            ans.push_back(j+1);
            return ans;  
        }
        else if(numbers[i]+numbers[j]<target){
            i++; 
        }
        else{
            j--;
        }
    }
    return ans; 
}

int main(){
     vector<int> arr = {2,7,11,15}; 
    int target = 9; 

    vector<int> ans = twoSum(arr,target); 
    
    for(int ele : ans){
        cout<<ele<<" "; 
    } 
    return 0; 
}