// check if the string is palindrome or not 

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str){
    int s = 0;
    int e = str.size()-1;

    while(s <= e){
        if(str[s++] != str[e--])return false;
    }
    
    return true;
}

int main(){
    string str = "noon";
    if(isPalindrome(str)) cout << "Yes string is palindrome";
    else cout << "Given string is not palindrome";
   return 0;
}