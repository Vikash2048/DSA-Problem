#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<vector<int>>& arr,int row, int col,int search){
    int start = 0;
    int end = row*col -1;

    int mid = start + (end-start)/2;

    while(start <= end){
        int element = arr[mid/col][mid%col];

        if(element == search) return true;

        else if(element < search)start = mid +1;
        
        else end = mid - 1;

        mid = start + (end-start)/2;
    }
    return false;
}
int main(){

    vector<vector<int>> arr = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int row = arr.size();
    int col = arr[0].size();

    int search_element = 2;

    cout << binary_search(arr,row,col,search_element);

   return 0;
}