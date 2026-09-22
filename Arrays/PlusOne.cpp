#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
    vector<int> ans; 
    int carry = 1; 
        
    for(int i=n-1;i>=0;i--){
        int sum = digits[i] + carry; 
        int temp = sum%10; 
        ans.push_back(temp);    
        carry = sum/10;
    }    
    if(carry==1) ans.push_back(carry);
    reverse(ans.begin(),ans.end()); 
    return ans;
}

void printArray(vector<int>&arr){
    int n = arr.size(); 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl; 
}

int main(){
    vector<int> arr = {9,9,9};
    vector<int>ans = plusOne(arr); 
    printArray(ans); 
    return 0; 
}