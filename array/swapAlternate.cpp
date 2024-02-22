#include<bits/stdc++.h>
using namespace std;

int swapAlternate(int arr[], int size){
    for(int i = 0; i<size; i=i+2){
        swap(arr[i],arr[i+1]);
    }

    return 0;
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int size = sizeof(arr)/sizeof(int);

    cout << "before swapping alternate element :" << endl;
    for(auto &it : arr){
        cout << it << " ";
    }
    cout << endl;

    swapAlternate(arr,size);

    cout << "after swapping alternate element :" << endl;
    for(auto &it : arr){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}