#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "geeks  for geeks";

    for(int i = 0; i<str.length(); i++){
        if(str[i] == ' '){
            cout << i << " ";
                     str.erase(i,1);
        }

    }

    for(char ch : str){
        cout << ch << " ";
    }


   return 0;
}