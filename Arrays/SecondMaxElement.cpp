#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {74,96,9,57,62,35,5,1,88,34,90,103}; 

    int n = sizeof(arr)/sizeof(int); 
    int max = INT_MIN; 
    int smax = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i]; 
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]>smax && arr[i]!=max){
            smax = arr[i]; 
        }
    }

    int tmax = INT_MIN; 
    for(int i=0;i<n;i++){
        if(arr[i]>tmax && arr[i]!=smax && arr[i]!=max){
            tmax = arr[i]; 
        }
    }
    
    cout<<"First max element is: "<<max<<endl; 
    cout<<"Second max element is: "<<smax<<endl; 
    cout<<"Third max element is: "<<tmax<<endl; 
    return 0; 
}