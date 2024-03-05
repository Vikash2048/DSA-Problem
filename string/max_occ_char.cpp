#include<bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(string str){
            int arr[26] = {0};
        
        for(int i = 0; i<str.length(); i++){
                int index = str[i] - 'a';
                arr[index]++;
        }
        
        int ans = 0;
        int max = -1;
        
        for(int i = 0; i<26; i++){
            if(arr[i] > max){
                max = arr[i];
                ans = i;
            }
        }
        
        return 'a' + ans;
}

int main(){

    string str = "testsample";

    cout << "Max occuring charcter is : " << getMaxOccuringChar(str);
   return 0;
}