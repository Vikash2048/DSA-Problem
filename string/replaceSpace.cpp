// remove space from the string to @40 

#include<bits/stdc++.h>
using namespace std;

string removeSpace(string str){
    string temp ="";

    for(int i = 0; i<str.length(); i++){
        if(str[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }

    return temp;
}

int main(){

    string str = "My name is vikash singh";

    cout << "Before removing the spaces : " << str << endl;
    string updatedStr = removeSpace(str);

    cout <<"After removign the string : " << updatedStr << endl;
   return 0;
}