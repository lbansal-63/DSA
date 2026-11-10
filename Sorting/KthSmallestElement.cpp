#include<iostream>
#include<vector>
using namespace std;

int kthSmallest(vector<int> &arr, int k) { // T.C. = O(k*n), S.C. = O(N)
    int n=arr.size(); 
    for(int i=0;i<k;i++){
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
    return arr[k-1]; 


    //sort(arr.begin(),arr.end()); // TC = O(N*logN). SC = O(N) but ghatiya tarika
    //return arr[k-1]; 
}

int main(){
    vector<int> arr = {10, 5, 4, 3, 48, 6, 2, 33, 53, 10}; 
    int k = 4; 

    int ans = kthSmallest(arr,k); 
    cout<<"Kth Smallest is: "<<ans<<endl; 
    return 0; 
}