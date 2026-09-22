#include<iostream>
#include<vector>
using namespace std;

void setZeroes(vector<vector<int>>& arr) {
    int m = arr.size(); 
    int n = arr[0].size(); 
    
    //copy the array
    vector<vector<int>>copy(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            copy[i][j] = arr[i][j]; 
        }
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(copy[i][j]==0){ 
                // set ith row 0
                for(int col=0;col<n;col++){
                    arr[i][col] = 0; 
                }

                // set jth col 0
                for(int row=0;row<m;row++){
                    arr[row][j] = 0; 
                }
            }
        }
    }
}

int main(){
    vector<vector<int>>arr = {{1,1,1},{1,0,1},{1,1,1}};

    int m = arr.size(); 
    int n = arr[0].size(); 

    setZeroes(arr); 

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" "; 
        }
        cout<<endl; 
    }

    return 0; 
}