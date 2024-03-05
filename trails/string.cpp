#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "my name is vikash";

    for(int i = 0; i<str.length(); i++){
        if(str[i] == ' '){
            str.replace(i,1,"@40");
        }
    }

    cout << str;
   return 0;
}