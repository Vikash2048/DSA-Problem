// you have to return index of the pair sum and only 1 pair in there
// arr[] = {2,3,1,7,8,5} target = 6;

#include<bits/stdc++.h>
using namespace std;

void pairSumIndex(int *arr, int size, int target){
    map<int,int> mp;

    for(int i = 0; i<size; i++){
        int element = target - arr[i];
        if(mp[element]){
            cout << "[" <<  mp[element] << "," << i << "]" << endl; 
        }
        mp.insert(make_pair(arr[i], i));
    }
}

int main(){

    int arr[] = {2,4,13,8,20};
    int size = sizeof(arr)/sizeof(int);
    int target = 12;

    pairSumIndex(arr,size,target);
    return 0;
}