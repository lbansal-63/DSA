#include<iostream>
#include<vector>
using namespace std;

vector<int> findIntersection(vector<int>& a, vector<int>& b) {
    vector<int>ans; 
    int m = a.size(); 
    int n = b.size(); 
        
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i]==b[j]){
                ans.push_back(a[i]);
                break; 
            }        
        }
    }
    return ans; 
}

int main(){
    return 0; 
}