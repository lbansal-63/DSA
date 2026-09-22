#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>a = {2, 4, 7, 10}; 
    vector<int>b = {2, 3};   

    int m = a.size(); 
    int n = b.size(); 
    
    vector<int>c(m+n); 
    int i=m-1; 
    int j=n-1; 
    int k=(m+n)-1;
    
    while(i>=0 && j>=0){
        if(a[i]>b[j]){
            c[k--]=a[i--]; 
        }else{
            c[k--]=b[j--]; 
        }
    }

    while(i>=0){
        c[k--]=a[i--]; 
    }
    while(j>=0){
        c[k--]=b[j--]; 
    }

    for(int ele : c){
        cout<<ele<<" "; 
    }
    return 0; 
}