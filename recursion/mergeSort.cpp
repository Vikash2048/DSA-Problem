// arr[] = {20,2,14,18,3}  

#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = s + (e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainIndex = s;

    for(int i = 0; i<len1; i++){
        first[i] = arr[mainIndex++];
    }

    for(int i = 0; i<len2; i++){
        second[i] = arr[mainIndex++];
    }

    mainIndex = s;

    int i = 0;
    int j = 0;

    while(i < len1 && j < len2){
        if(first[i] <= second[j]){
            arr[mainIndex++] = first[i++];
        }
        else{
            arr[mainIndex++] = second[j++];
        }
    }

    while(i < len1){
        arr[mainIndex++] = first[i++];
    }

    while(j < len2){
        arr[mainIndex++] = second[j++];
    }

    delete []first;
    delete []second;
}

void mergeSort(int *arr, int s, int e){
    if(s >= e) return;

    int mid = s + (e-s)/2;

    // merge left part
    mergeSort(arr,s,mid);

    // merge right part
    mergeSort(arr, mid + 1, e);

    merge(arr,s,e);

}

int main(){
    
    int arr[] = {100,20,84,97,12,21,99};
    int size = sizeof(arr)/sizeof(int);

    cout << "array before merge sort :" << endl;
    for(auto i : arr){
        cout << i << " ";
    }

    mergeSort(arr,0,size-1);

    cout << endl << "array after merge sort: " << endl;
    for(auto i : arr){
        cout << i << " ";
    }
    return 0;
}