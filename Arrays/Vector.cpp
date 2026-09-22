#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr(8,-1); // index 0 to 7
    int n = arr.size(); 
    
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
    cout<<arr.size()<<endl; 
    cout<<endl;

    arr.push_back(5); // add an element at end
    arr.push_back(14); 
    arr.pop_back();//remove last element
    arr.push_back(7);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl; 
    cout<<arr.size()<<endl; 
    return 0; 
}