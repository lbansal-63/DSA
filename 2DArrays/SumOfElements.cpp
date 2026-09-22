#include<iostream>
using namespace std;

int main(){
    int arr[][4] = {{5,8,1,2},{9,9,4,4},{7,0,3,5}};
    int sum = 0; 

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            sum += arr[i][j]; 
        }
    }
    cout<<"Sum of elements of matrix is: "<<sum<<endl; 
    return 0; 
}