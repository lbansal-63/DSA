#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>a = {2, 4, 7, 10}; 
    vector<int>b = {2, 3};   

    int m = a.size(); 
    int n = b.size(); 

    vector<int>c(m+n); 

    int i=0; 
    int j=0; 
    int k=0; 

    while(i<m && j<n){
        if(a[i]<b[j]){
            c[k++] = a[i++]; 
        }else{
            c[k++] = b[j++]; 
        }
    }
    
    while(i<m){
        c[k++] = a[i++]; 
    }
    while(j<n){
        c[k++] = b[j++]; 
    }

    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" "; 
    }
    return 0; 
}