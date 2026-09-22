#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {74,96,9,57,62,35,5,1,88,34,90,103}; 

    int n = sizeof(arr)/sizeof(int); 

    int mx = INT_MIN;
    for(int i=0;i<n;i++){
        // if(arr[i]>max){
        //     max = arr[i]; 
        // }
        mx = max(mx,arr[i]); 
    }

    cout<<"Maximum element in the array is: "<<mx<<endl; 
    return 0; 
}