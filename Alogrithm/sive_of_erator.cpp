// count a prime number n*(log(logn))

#include<bits/stdc++.h>
using namespace std;

int primeCount(int n){
    int cnt = 0;

    vector<bool> prime(n+1, true);

    prime[0] = prime[1] = false;

    for(int i = 0; i<n; i++)
    {
        if(prime[i]){
            cnt++;

            for(int j = i*2; j<n; j=j+i){
                prime[j] = false;
            }
        }
    }

    return cnt;
}

int main(){

    int n = 5000000;

    cout << primeCount(n) << endl;
   return 0;
}