#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int assignCookies(vector<int> greed,vector<int> cookies){
    sort(greed.begin(), greed.end());
    sort(cookies.begin(), cookies.end());
    int i=0,j=0;
    while(i<greed.size() && j<cookies.size()){
        if(greed[i]<=cookies[j]){
            j++;
        }
        i++;
    }
    return j;
}

int main(){

    vector<int> greed={1,5,3,3,4};
    vector<int> cookies={4,2,1,2,1,3};
    cout<<assignCookies(greed, cookies)<<endl;
}