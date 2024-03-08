// str - "abbaca


#include<bits/stdc++.h>
using namespace std;

string remove_duplicate(string str){
    string result = "";

    for(char c : str){
        if(!result.empty() && c == result.back()){
            result.pop_back();
        }
        else{
            result.push_back(c);
        }
    }

    return result;
}

int main(){

    string str = "abbaca";

    cout << str << endl;

    string result = remove_duplicate(str);

    cout << result << endl;
   return 0;
}