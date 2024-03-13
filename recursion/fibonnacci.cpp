#include<bits/stdc++.h>
using namespace std;

int fib(int index){
    if(index == 1) return 0;
    else if(index == 2) return 1;

    return fib(index-1) + fib(index-2);
}

int main(){
    
    int index = 1;

    cout << "element at " << index << " index is :" << fib(index);
    return 0;
}