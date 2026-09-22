#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {4,3,8,2,9}; 
    cout<<v.size()<<" "<<v.capacity()<<endl;  // 5 5
    v.push_back(4); 
    cout<<v.size()<<" "<<v.capacity()<<endl; // 6 10
    return 0; 
}