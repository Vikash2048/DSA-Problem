#include<bits/stdc++.h>
using namespace std;

int countWayToStair(int n){
    if(n < 0) return 0;
    if(n == 0) return 1;

    int ans = countWayToStair(n-1) + countWayToStair(n-2);

    return ans;
}

int main(){
   
    int n = 3;
    cout << countWayToStair(n);
    return 0;
}