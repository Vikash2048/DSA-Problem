// find power(a,b)  
// if b is even then ans = (a^b/2 * a^b/2) and if odd a * (a^b/2 * a^b/2)


#include<bits/stdc++.h>
using namespace std;

int power(int a, int b){
    if(b == 0) return 1;
    
    if(b == 1) return a;

    int ans = power(a,b/2);

    if(b%2 == 0) return ans*ans;
    else return a * ans * ans;
}

int main(){
   
    int a = 3;
    int b = 11;

    cout << power(a,b) << endl;
    return 0;
}