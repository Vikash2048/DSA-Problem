// each row is sorted and each col is sorted 



#include<bits/stdc++.h>
using namespace std;

bool findElement(vector<vector<int>>& arr,int row, int col, int target){
    int rowIndex = 0;
    int colIndex= col - 1;

    while(rowIndex < row && colIndex >= 0){
        int element = arr[rowIndex][colIndex];

        if(element == target) return true;

        else if(element < target) rowIndex++;

        else colIndex--;
    }

    return false;
}

int main(){
    vector<vector<int>> arr = {{1,4,7,11,15},
                                {2,5,8,12,19},
                                {3,6,9,16,22},
                                {10,13,14,17,24},
                                {20,30,40,50,60}};

    int row = arr.size();
    int col = arr[0].size();
    int target = 90;

    cout << findElement(arr,row,col,target);
   return 0;
}