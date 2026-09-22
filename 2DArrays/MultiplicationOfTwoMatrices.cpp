#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> arr = {{1,2},{3,4},{5,6}}; 
    vector<vector<int>> brr = {{1,2,3,4},{5,6,7,8}}; 
    
    int row1 = arr.size(); 
    int col1 = arr[0].size(); 
    int row2 = brr.size(); 
    int col2 = brr[0].size(); 
    
    if(col1!=row2){
        cout<<"Multiplication not possible"<<endl;
    }
    
    else{
        int m = row1; 
        int n = col2; 
        vector<vector<int>> mul(m,vector<int>(n,0));

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<col1;k++){
                    mul[i][j] += arr[i][k] * brr[k][j]; 
                }
            }
        }

        cout<<"Multiplication result is: "<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<mul[i][j]<<" "; 
            }
            cout<<endl; 
        }

    }

    return 0; 
}