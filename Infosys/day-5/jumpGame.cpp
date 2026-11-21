#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int jumpGame(vector<int> nums){
    int n = nums.size();
    int maxReach = 0;
    for(int i=0;i<n;i++){
        if(i>maxReach) return false;
        maxReach = max(maxReach, i+nums[i]);
    }
    return true;
}   



int main(){

    vector<int> nums={2,3,1,1,4};
    cout<<jumpGame(nums)<<endl;
}