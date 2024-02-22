#include<bits/stdc++.h>
using namespace std;

double squareRoot(int n,int pre){
    long long int s = 0,e = n;
    long long int mid = s + (e-s)/2;
    long long int ans = 0;

    while(s <= e){
        if(mid*mid == n) return mid;
        else if(mid*mid < n){
            ans = mid;
            s = mid + 1;
        }
        else e = mid - 1;
        mid = s +(e-s)/2;
    }

    double factor = 1;
    double square = 0;
    for(int i = 0; i<pre; i++){
        factor = factor / 10;

        for(double j = ans; j*j < n; j+=factor){
            square = j;
        }
    }

    return square;



}

int main()
{
    int n = 4;
    int pre = 2;

    cout << "square root of "<< n << " is : " << squareRoot(n,pre) << endl;
    return 0;
}