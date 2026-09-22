#include<iostream>
using namespace std;

int main(){
    int arr[][4] = {{1, 1, 1, 1}, {2, 2, 2, 2}, {3, 3, 3, 3}, {4, 4, 4, 4}};
    int n = 4; 
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            swap(arr[i][j],arr[j][i]); 
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" "; 
        }
        cout<<endl; 
    }
    return 0; 
}