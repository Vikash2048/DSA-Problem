// s = daabcbaabcbc part = abc 


#include<bits/stdc++.h>
using namespace std;

string removeSubstring(string str, string part){
    while(str.length() != 0 && str.find(part) < str.length()){
        str.erase(str.find(part),part.length());
    }
    return str;
}

int main(){

    string str = "daabcbaabcbc";
    string part = "abc";

    string s = removeSubstring(str,part);

    cout << s << endl;
   return 0;
}