#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>>ans(n,vector<int>(n,0));
    int ele = 1; 
    int minr = 0, maxr = n-1; 
    int minc = 0, maxc = n-1; 

    while(minr<=maxr && minc<=maxc){
        for(int j=minc;j<=maxc;j++) ans[minr][j] = ele++;  
        minr++; 
        if(minr>maxr || minc>maxc) break; 

        for(int i=minr;i<=maxr;i++) ans[i][maxc] = ele++;   
        maxc--; 
        if(minr>maxr || minc>maxc) break; 

        for(int j=maxc;j>=minc;j--) ans[maxr][j] = ele++;   
        maxr--; 
        if(minr>maxr || minc>maxc) break; 

        for(int i=maxr;i>=minr;i--) ans[i][minc] = ele++;  
        minc++; 
    }
    return ans; 
}

int main(){
    int n; 
    cout<<"Enter the value of n: "; 
    cin>>n; 

    vector<vector<int>> ans = generateMatrix(n); 
    int row = ans.size(); 
    int col = ans[0].size(); 

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(ans[i][j]<=9){
                cout<<ans[i][j]<<"  "; 
            }else{
                cout<<ans[i][j]<<" "; 
            }
        }
        cout<<endl; 
    }
    return 0; 
}