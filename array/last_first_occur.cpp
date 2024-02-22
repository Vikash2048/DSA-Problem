#include<bits/stdc++.h>
using namespace std;

int firstOccurence(int arr[],int size, int element){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    int ans = 0;

    while(s <= e){
        if(arr[mid] == element){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid] < element){
            s = mid + 1;
        }
        else e = mid - 1;

        mid = s + (e-s)/2;
    }

    return ans;

}
int lastOccurence(int arr[],int size, int element){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    int ans = 0;

    while(s <= e){
        if(arr[mid] == element){
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid] < element){
            s = mid + 1;
        }
        else e = mid - 1;

        mid = s + (e-s)/2;
    }

    return ans;

}

int noOfOccurence(int first, int last, int size){
    return ((last - first) + 1);
}
int main()
{
    int arr[] = {0,0,1,1,2,2,2,2};
    int size = sizeof(arr)/sizeof(int);
    int element = 1;

    cout << "first occurence : " << firstOccurence(arr,size,element) << " last occurence : " << lastOccurence(arr,size,element) << " totoal number of occurence : " << noOfOccurence(firstOccurence(arr,size,element),lastOccurence(arr,size,element),size-1);

    return 0;
}