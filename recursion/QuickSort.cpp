// select an number and place on it right location where on it left size all number should be smaller and on right all number should be bigger 

#include<bits/stdc++.h>
using namespace std;

int partition(int *arr, int s, int e){

    // select first element
    int pivot = arr[s];

    // cnt of element less then pivot
    int cnt = 0;

    for(int i = s+1; i<=e; i++){
        if(arr[i] < pivot) cnt++;
    }

    int pivotRightIndex = s + cnt;

    swap(arr[s],arr[pivotRightIndex]);

    int i = s, j = e;

    while(i < pivotRightIndex && j > pivotRightIndex){
        while(arr[i] < pivot) i++;
        while(arr[j] > pivot) j--;

        // if condition to handle when i > pivotindex and j < pivotIndex
        if(i < pivotRightIndex && j > pivotRightIndex){
            swap(arr[i++],arr[j--]);
        }
    }

    
    return pivotRightIndex;
    
}

void quickSort(int *arr, int s, int e){
    if(s >= e) return ;

    // partition 
    int index = partition(arr, s, e);

    // sort left side
    quickSort(arr,s,index-1);

    // sort right side
    quickSort(arr, index+1, e);
}

int main(){
    
    int arr[] = {20,2,14,18,3};
    int size = sizeof(arr)/sizeof(int);

    cout << "array before quick sort :" << endl;
    for(auto i : arr){
        cout << i << " ";
    }

    quickSort(arr,0,size-1);

    cout << endl << "array after quick sort: " << endl;
    for(auto i : arr){
        cout << i << " ";
    }
    return 0;
}