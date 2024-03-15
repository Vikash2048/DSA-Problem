// arr[] = {1,2,3}  ans = {{},{1},{2},{3},{1,2},{2,3},{1,2,3}};  


#include<bits/stdc++.h>
using namespace std;

void powerSubset(vector<int> arr, vector<vector<int>>& ans, vector<int>output, int index){
    if(index >= arr.size()){
        ans.push_back(output);
        return;
    }

    // exclude
    powerSubset(arr,ans,output,index+1);

    // include
    int element  = arr[index];
    output.push_back(element);
    powerSubset(arr,ans,output,index+1);
}

int main(){
    
    vector<int> arr = {1,2,3};
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;

    powerSubset(arr,ans,output,index);

    for(auto i : ans){
        for(auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}