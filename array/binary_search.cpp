#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int element){
    int s = 0;
    int e = n;
    int mid = s + (e-s)/2;

    while(s <= e){
        if(arr[mid] == element){
            return mid;
        }
        else if(arr[mid] <= element){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
//
    return mid;
}

int main()
{
    int arr[] = {2,5,8,9,12,35,48};
    int n = sizeof(arr)/sizeof(int);
    int element = 8;

    cout << binarySearch(arr,n,element);
    return 0;
}