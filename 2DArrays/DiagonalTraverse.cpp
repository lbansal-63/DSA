#include<iostream>
#include<vector>
using namespace std;

vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
    int m = mat.size();
    int n = mat[0].size(); 
    vector<int> ans; 

    for(int d=0;d<m+n-1;d++){
        int i,j;

        if(d%2==0){
            //starting row-col
            i= min(d,m-1); 
            j= d-i; 

            while(i>=0 && j<n){
                ans.push_back(mat[i][j]); 
                i--; 
                j++; 
            }
        }

        else{
            j= min(d,n-1); 
            i= d-j; 

            while(i<m && j>=0){
                ans.push_back(mat[i][j]); 
                i++; 
                j--; 
            } 
        }
    }
    return ans; 
}

int main(){
    vector<vector<int>> arr = {{1,2,3,4,5},{6,7,8,9,0},{1,6,3,9,5},{8,4,0,7,2}}; 
    vector<int> ans = findDiagonalOrder(arr); 

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" "; 
    }
    return 0; 
}