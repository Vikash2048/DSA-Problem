#include<bits/stdc++.h>
using namespace std;

bool find(int *arr, int size, int searchElement){
    if(size == 0) return false;

    if(arr[0] == searchElement) return true;

    else{
        // cout << arr[0] << " ";
        return find(arr+1,size-1,searchElement);
    }
}

int main(){
    
    int arr[5] = {2,40,1,98,3};
    int size = 5;
    int searchElement = 1;

    bool ans = find(arr,size,searchElement);
    if(ans) cout << "element found" << endl;
    else cout << "element not found" << endl;
    return 0;
}