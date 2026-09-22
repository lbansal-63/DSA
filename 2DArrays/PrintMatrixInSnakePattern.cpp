#include<iostream>
using namespace std;

int main(){
    int matrix[][4] = {{10,20,30,40},{50,60,70,80},{27,29,47,48},{32,33,39,50}}; 

    int n = 4; 
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<matrix[i][j]<<" "; 
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<matrix[i][j]<<" ";  
            } 
        }
    }
    return 0; 
}