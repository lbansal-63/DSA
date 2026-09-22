#include<iostream>
using namespace std;

int main(){
    // int arr[3][4]; 
    int arr[][4] = {{5,8,1,2},{9,9,4,4},{7,0,3,5}}; // mentioning number of cols is necessary but row is optional
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" "; 
        }
        cout<<endl; 
    }
    
    return 0; 
}