// rotate an array counter clockwise 


#include<bits/stdc++.h>
using namespace std;

void rotateArr(int arr[], int d, int n){
        // code here
        reverse(arr,arr+n);
        
        int temp[n];
        
        for(int i = 0; i<n;i++){
            int index = (i+d)%n;
            temp[index] = arr[i];
        }
        
        reverse(temp,temp+n);
        
        for(int i = 0; i<n; i++){
            arr[i] = temp[i];
        }
    }

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int d = 2;

    cout << "array before rotate counter clockwise : " << endl;
    for(auto i : arr){
        cout << i << " ";
    }

    cout << endl;

    cout << "array after rotation :" << endl;

    rotateArr(arr,d,n);

    for(auto i : arr){
        cout << i <<" ";
    }
   return 0;
}