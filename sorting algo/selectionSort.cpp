#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int size){
    for(int i = 0; i<size-1; i++){
        int minIndex = i;
        for(int j = i; j<size; j++){
            if(arr[j] <= arr[minIndex] ){
                minIndex = j;
            }

        }
        swap(arr[i],arr[minIndex]);
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

    selectionSort(arr,size);

    cout << "after sort : " << endl;
    for(auto &it : arr){
        cout << it << " ";
    }

    return 0;
}