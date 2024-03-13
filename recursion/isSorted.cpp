// check if array is sorted or not using recursion 

#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int size){
    if(size == 0 || size == 1) return true;

    if(arr[0] > arr[1]) return false;

    return isSorted(arr+1,size-1);
}

int main(){
    
    int arr[5] = {2,5,3,9,20};
    int size = 5;

    bool ans = isSorted(arr,size);

    if(ans) cout << "array is sorted " << endl;
    else cout << " array is not sorted " << endl;
    return 0;
}