#include<bits/stdc++.h>
using namespace std;

// search pivot element in rotated sorted array 

int pivot(int arr[], int size){
    int s = 0,e = size;
    int mid = s + (e-s)/2;

    while(s <= e){
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid + 1]) return mid;
        else if(arr[mid] < arr[0]) e = mid - 1;
        else s = mid + 1;

        mid = s + (e-s)/2;
    }

}


int searchelement(int arr[],int size, int point,int search){
    int s,e;
    if(search > arr[0]){
        s = 0;
        e = point;
    }
    else{
        s = point;
        e = size;
    }

    int mid = s + (e-s)/2;

    while(s <= e){
        if(arr[mid] == search){
            return mid;
        }
        else if(arr[mid] < search){
            s = mid + 1;
        }
        else e = mid - 1;

        mid = s + (e-s)/2;
    }
    return -1;
}



int main()
{
    int arr[] = {1,1};
    int size = sizeof(arr)/sizeof(int);
    int search = 1;

    int pivotPoint = pivot(arr,size-1);

    cout << "Pivot index is : "<< pivotPoint << " Pivot element is : " << arr[pivotPoint] << endl;

    cout << "search element is  : " << searchelement(arr,size-1,pivotPoint,search);
    return 0;
}