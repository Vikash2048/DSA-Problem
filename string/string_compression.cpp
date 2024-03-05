// arr[] = ["a","a","a","b","b"];
// ans[] = ["a","3","b","2"]


#include<bits/stdc++.h>
using namespace std;

int compress(char chars[], int size){
    int i = 0;
    int ansIndex = 0;
    
    while(i < size){
        int j = i + 1;
        while(j < size && chars[i] == chars[j]){
            j++;
        }

        chars[ansIndex++] = chars[i];

        int count = j - i;

        if(count > 1){
            string cnt = to_string(count);
            for(char ch : cnt){
                chars[ansIndex++] = ch;
            }
        }
        i = j;
    }

    return ansIndex;
}

int main()
{

    char chars[] = {'a','a','b','b','c','c','c'};
    int size = 7;
    cout << compress(chars, size);
   return 0;
}