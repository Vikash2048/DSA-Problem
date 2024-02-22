#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num = 16;

    cout << num << endl;
    cout << (num & 1) << endl;

    while(num != 0){
        cout<< (num & 1) << " ";
        num = num >> 1;
    }
    return 0;
}