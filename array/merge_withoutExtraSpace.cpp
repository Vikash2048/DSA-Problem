// merge to sorted array without extra space

#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[], int arr2[], int n, int m) 
        { 
            // code here 
            int i = n-1;
            int j = 0;
            
            while(i>=0 && j<m){
                if(arr1[i] >= arr2[j]){
                    swap(arr1[i],arr2[j]);
                }
                i--,j++;
            }
            
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
        } 

int main(){

    int arr1[] = {1,3,5,7};
    int n = sizeof(arr1)/sizeof(int);
    int arr2[] = {0,2,6,8,9};
    int m = sizeof(arr2)/sizeof(int);

    merge(arr1,arr2,n,m);

    for(auto i : arr1){
        cout << i << " ";
    }
    for(auto i : arr2){
        cout << i << " ";
    }
   return 0;
}