#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int decimal_to_binary(int num){
    int ans = 0;
    int i = 0;

    while(num != 0){
        int bit = num & 1;
        ans+=(bit * pow(10,i));
        i = i + 1;
        num = num >> 1;
    }

    return ans;
}

int main()
{
    int num = 6;

    cout << decimal_to_binary(num) << endl;
    return 0;
}