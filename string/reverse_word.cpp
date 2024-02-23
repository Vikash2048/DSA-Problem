// reverse the word of the string with extra space 

#include<bits/stdc++.h>
using namespace std;

string reverseString(string str){
    string reverseStr = "";
    string temp = "";

    for(int i = str.size()-1; i>=0; i--){
        if(str[i+1] == ' '){
            reverse(temp.begin(),temp.end());
            reverseStr.append(temp);
            reverseStr.push_back(' ');
            temp = "";
        }
        else{
            temp.push_back(str[i]);
        }
    }

    reverse(temp.begin(),temp.end());
    reverseStr.append(temp);

    return reverseStr;
}

int main(){

    string str = "the sky is blue";
    
    cout << "string before reverse : " << str << endl;

    string reverseStr = reverseString(str);

    cout << "string after reverse : " << reverseStr << endl;
   return 0;
}