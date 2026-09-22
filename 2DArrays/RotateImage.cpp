#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    //transpose the matrix
    int arr[][4] = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}}; 
    int n = 4; 
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            swap(arr[i][j],arr[j][i]); 
        }
    }

    //reverse the matrix
    for(int i=0;i<n;i++){
        int s = 0; int e = n-1; 
        while(s<e){
            int temp = arr[i][s];
            arr[i][s] = arr[i][e]; 
            arr[i][e] = temp; 
            s++; 
            e--; 
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