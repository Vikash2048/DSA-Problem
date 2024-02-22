#include<bits/stdc++.h>
using namespace std;

int peakElement(int arr[],int size){
    int s = 0,e = size;
    int mid = s + (e-s)/2;

    while(s <= e){
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
            return mid;
        }
        else if(arr[mid] > arr[mid-1]) s = mid + 1;
        else e = mid - 1;

        mid = s + (e-s)/2;
    }

    return mid;
}
int main()
{
    int arr[] = {3,4,5,1};
    int size = sizeof(arr)/sizeof(int);

    cout << "peak element at index : " << peakElement(arr,size) << endl;

   return 0;
}