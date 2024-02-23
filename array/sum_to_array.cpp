// add to array 

#include<bits/stdc++.h>
using namespace std;

vector<int> addTwoArray(int arr[], int n, int arr2[], int m){
    int i= 0;
    int j = 0;
    vector<int> sum;

    reverse(arr,arr+n);
    reverse(arr2,arr2+m);

    int carry = 0;
    while(i<n && j <m){
        int add = arr[i++] + arr2[j++] + carry;
        sum.push_back(add%10);
        carry = add/10;
    }
    while(i<n){
        int add = arr[i++] + carry;
        sum.push_back(add%10);
        carry = add/10;
    }
    while(j <m){
        int add = arr2[j++] + carry;
        sum.push_back(add%10);
        carry = add/10;
    }

    if(carry > 0) sum.push_back(carry);

    reverse(sum.begin(), sum.end());
    

    return sum;


}
int main(){
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(int);
    int arr2[] = {9,9};
    int m = sizeof(arr2)/sizeof(int);

    cout << "sum array will be :" << endl;

    vector<int> sum = addTwoArray(arr,n,arr2,m);

    for(auto i : sum){
        cout << i << " ";
    }
   return 0;
}