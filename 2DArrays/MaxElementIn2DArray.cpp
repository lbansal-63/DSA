#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[][4] = {{5,8,1,2},{9,9,4,4},{7,0,3,5}};
    
    int max = INT_MIN;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]>max) max = arr[i][j]; 
        }
    }
    cout<<"Maximum element in 2-D Array is: "<<max<<endl; 
    return 0; 
}