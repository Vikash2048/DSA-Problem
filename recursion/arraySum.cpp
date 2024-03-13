#include<bits/stdc++.h>
using namespace std;

int arraySum(int *arr,int size){
    if(size == 0) return 0;
    if(size == 1) return arr[0];
    else{
        int remainingPart = arraySum(arr+1,size-1);
        int sum = arr[0] + remainingPart;
        return sum;
    }
}

int main(){
    
    int arr[5] = {10,20,30,40,50};
    int size = 5;

    cout << "sum of array is : " << arraySum(arr,size);
    return 0;
}