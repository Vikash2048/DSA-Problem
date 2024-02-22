#include<bits/stdc++.h>
using namespace std;

int duplicate(int arr[],int size){
    int ans = 0;
    for(int i = 0; i<size; i++){
        ans = ans ^ arr[i];
    }

    for(int i = 0; i<size; i++){
        ans = ans ^ i;
    }

    return ans;
}

int main()
{
    int arr[] = {6, 3, 1, 5, 4, 3, 2};
    int size = sizeof(arr)/sizeof(int);

    cout << duplicate(arr,size);
    return 0;
}