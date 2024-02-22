#include <bits/stdc++.h>
using namespace std;

void sort012(int *arr, int n)
{
    //   Write your code here
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            cnt0++;
        else if (arr[i] == 1)
            cnt1++;
        else
            cnt2++;
    }
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (cnt0 != 0)
        {
            arr[i] = 0;
            cnt0--;
        }
        else if (cnt1 != 0)
        {
            arr[i] = 1;
            cnt1--;
        }
        else if (cnt2 != 0)
        {
            arr[i] = 2;
            cnt2--;
        }
    }
}

int main()
{
    int arr[] = {0, 1, 2, 2, 1, 0};
    int n = sizeof(arr) / sizeof(int);

    cout << "array without sort :" << endl;
    for (auto &it : arr)
    {
        cout << it << " ";
    }

    cout << endl;

    sort012(arr, n);

    cout << "array after sort :" << endl;
    for(auto &it : arr){
        cout << it << " ";
    }
    return 0;
}