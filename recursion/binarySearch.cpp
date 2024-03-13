#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int *arr, int s, int e, int key){
    if(s > e) return false;

    int mid = s+(e-s)/2;

    if(arr[mid] == key) return true;
    else{
        if(arr[mid] > key){
            return binarySearch(arr,s,mid-1,key);
        }
        else{
            return binarySearch(arr,mid+1,e,key);
        }
    }
}

int main(){
    
    int arr[5] = {2,5,8,10,23};
    int size = 5;
    int key = 23;
    int s = 0;
    int e = 5;

    bool ans = binarySearch(arr,s,e,key);
    if(ans) cout << "element found" << endl;
    else cout << "element not found" << endl;
    return 0;
}