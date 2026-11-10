#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int numRescueBoats(vector<int>& people, int limit) 
    {
    sort(people.begin(),people.end()); 
    int i=0; 
        int j=people.size()-1;
        int boats = 0;

    while(i<=j)
    {
        if(people[i]+people[j]<=limit){
            i++;
            j--; 
        }
        else{
            j--; 
        }
         boats++;
    }

    return boats;
}

int main(){
    vector<int>arr = {80,74,48,63,95,57,120};
    int limit = 150; 
    int n = sizeof(arr)/sizeof(int); 
    int ans = numRescueBoats(arr,limit);
    cout<<"Number of boats: "<<ans<<endl; 
    return 0; 
}