#include<bits/stdc++.h>
using namespace std;

void mergeSortedArray(int arr1[], int arr2[], int n, int m, vector<int>& sortedMergeArray){

    int i = 0;
    int j = 0;

    while(i < n && j < m){
        if(arr1[i] <= arr2[j]){
            sortedMergeArray.push_back(arr1[i++]);
        }
        else{
            sortedMergeArray.push_back(arr2[j++]);
        }
    }

    while(i < n){
        sortedMergeArray.push_back(arr1[i++]);
    }
    while(j < m){
        sortedMergeArray.push_back(arr2[j++]);
    }
}

int main(){
    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};

    vector<int> sortedMergeArray;
    int n = 5;
    int m = 3;

    mergeSortedArray(arr1, arr2, n, m, sortedMergeArray);

    for(auto i : sortedMergeArray){
        cout << i << " ";
    }
   return 0;
}