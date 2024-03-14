// str = "abcde" ans = "edcba" 

#include<bits/stdc++.h>
using namespace std;

void reverseString(string& str, int s, int e){
    if(s>=e) return;

    swap(str[s],str[e]);

    return reverseString(str,s+1,e-1);
}

int main(){
    
    string str = "abcde";
    int e = str.length();
    int s = 0;

    reverseString(str, s, e-1);

    cout << str << endl;
    return 0;
}