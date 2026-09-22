#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[][4] = {{9,4,8,4},{6,1,1,51},{2,2,3,6}};
    int minEle = INT_MAX;
    int minRow = -1; 

    for(int i=0;i<3;i++){
        int maxEle = INT_MIN; 
        for(int j=0;j<4;j++){
            maxEle = max(maxEle,arr[i][j]); 
        }
        if(minEle>maxEle){
            minRow = i;
            minEle = maxEle; 
        }
    }

    cout<<minRow<<" "<<minEle<<endl; 
    return 0; 
}