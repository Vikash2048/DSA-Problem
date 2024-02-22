#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int size){
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main()
{
    int arr[] = {1,7,2,9,3,0};
    int size = sizeof(arr)/sizeof(int);

    cout << "before sort : " << endl;
    for(auto &it : arr){
        cout << it << " ";
    }
    cout << endl;

    bubbleSort(arr,size);

    cout << "after sort : " << endl;
    for(auto &it : arr){
        cout << it << " ";
    }
    return 0;
}