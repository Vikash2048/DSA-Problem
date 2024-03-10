// x = 4, y = 3, m = 10 

#include<bits/stdc++.h>
using namespace std;

int modularExponential(int x, int y, int m){
    int ans = 1;

    while(y > 0){
        if(y & 1){
            // odd 
            ans = (1LL * (ans) * (x)%m)%m;
        }
        x = (1LL * (x)%m * (x)%m)%m;
        y = y >> 1;
    }

    return ans;
}

int main(){

    int x = 4;
    int y = 3;
    int m = 10;

    cout << modularExponential(x,y,m) << endl;
   return 0;
}