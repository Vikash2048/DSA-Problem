// gcd(a,b) 

#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(a == 0) return b;
    if(b == 0) return a;

    while(a != b){
        if(a > b) a = a - b;
        else b = b - a;
    }

    return a;
}

int main(){

    int a = 74;
    int b = 42;

    cout << gcd(a,b) << endl;
   return 0;
}