#include<bits/stdc++.h>
using namespace std;

vector<int> findIntersection(int arr1[],int arr2[],int size1, int size2){
    int i = 0,j = 0;
    vector<int> ans;

    while(i<size1 && j <size2){
        if(arr1[i] < arr2[j]) i++;
        else if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++,j++;
        }
        else j++;
    }
    return ans;
}

int main()
{
    int arr1[] = {1, 2, 2, 2, 3, 4};
    int arr2[] = {2, 2, 3, 3};
    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);

    vector<int> intersectedArray = findIntersection(arr1,arr2,size1,size2);

    for(auto &it : intersectedArray){
        cout << it << " ";
    }
    return 0;
}