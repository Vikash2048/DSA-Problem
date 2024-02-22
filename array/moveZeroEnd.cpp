// move all zero to the end of the array 

#include<bits/stdc++.h>
using namespace std;

void pushZeroToEnd(int arr[], int size) {
	    // code here
	    int zeroIndex = 0;
	    
	    for(int i = 0; i<size; i++){
	        if(arr[i] != 0){
	            swap(arr[i],arr[zeroIndex++]);
	        }
	    }
	}

int main(){

    int arr[] = {3,5,0,0,4};
    int size = 5;

    pushZeroToEnd(arr,size);

    for(auto i : arr){
        cout << i << " ";
    }
   return 0;
}