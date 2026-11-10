#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height) {
    int n=height.size(); 
    int i=0; 
    int j=n-1; 

    int maxArea = 0; 
    while(i<j){
        int width = j-i; 
        int heights = min(height[i],height[j]); 
        int area = width*heights; 
        maxArea = max(maxArea,area); 
        if(height[i]<height[j]){
            i++; 
        }
        else{
            j--; 
        }
    }
    return maxArea; 
}

int main(){
    return 0; 
}