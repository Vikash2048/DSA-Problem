#include<bits/stdc++.h>
using namespace std;

int uniqueElement(int arr[],int size){
    int ans = 0;
    for(int i = 0; i<size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {2, 3, 1, 6, 3, 6, 2,1,11};
    int size = sizeof(arr)/sizeof(int);

    cout << uniqueElement(arr,size);
    return 0;
}