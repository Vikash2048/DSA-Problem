#include<bits/stdc++.h>
using namespace std;

int Max_Min(int arr[],int size){
    int max = INT_MIN;
    int min = INT_MAX;

    for(int i = 0; i<size; i++){
        if(arr[i] < min)min = arr[i];
        if(arr[i] > max) max = arr[i];
    }

    return min;
}

int main()
{
    int arr[] = {4,9,7,2,6};
    int size = sizeof(arr)/4;

    cout << Max_Min(arr,size) <<endl;

    return 0;
}