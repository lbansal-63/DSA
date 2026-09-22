#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n; 
    cout<<"Enter rows: "; 
    cin>>m; 

    cout<<"Enter cols: "; 
    cin>>n; 
    
    vector<vector<int>>v(m,vector<int>(n,0)); 
    v.push_back(vector<int>(4,-1)); 
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" "; 
        }
        cout<<endl; 
    }

    return 0; 
}