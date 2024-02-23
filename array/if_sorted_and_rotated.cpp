// check if the array is sorted and rotated 

#include<bits/stdc++.h>
using namespace std;

bool check(int arr[], int n){
    int pair = 0;

    for(int i = 0; i<n; i++){
        if(i == n-1){
            if(arr[i] > arr[0]) pair++;
        }
        else if(arr[i] > arr[i+1]) pair++;
    }

    if(pair <= 1) return true;
    else return false;
}

int main(){
    int arr[] = {3,4,5,1,2};
    int n = sizeof(arr)/sizeof(int);

    if(check(arr,n)){
        cout << "true";
    }
    else{
        cout << "false";
    }


   return 0;
}