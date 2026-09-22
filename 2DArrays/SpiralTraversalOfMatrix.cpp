#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size(); 

        vector<int>ans; 
        int minr = 0, maxr = m-1; 
        int minc = 0, maxc = n-1; 

        while(minr<=maxr && minc<=maxc){
            for(int j=minc;j<=maxc;j++) ans.push_back(arr[minr][j]); 
            minr++; 
            if(minr>maxr || minc>maxc) break; 

            for(int i=minr;i<=maxr;i++) ans.push_back(arr[i][maxc]); 
            maxc--; 
            if(minr>maxr || minc>maxc) break; 

            for(int j=maxc;j>=minc;j--) ans.push_back(arr[maxr][j]); 
            maxr--; 
            if(minr>maxr || minc>maxc) break; 

            for(int i=maxr;i>=minr;i--) ans.push_back(arr[i][minc]); 
            minc++; 
        }

        return ans; 
}

int main(){
    vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}}; 

    vector<int>ans = spiralOrder(matrix); 
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" "; 
    }
    return 0; 
}