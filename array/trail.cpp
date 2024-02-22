#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,1,3,5,5};
    int size = sizeof(arr)/sizeof(int);

    unordered_map<int,int> m;

    for(auto &it: arr){
        m[it]++;
    }

    unordered_set<int> s;

    for(auto &it : m){
        // cout << it.first << it.second << endl;
        if(s.count(it.second)) cout << s.count(it.second) << "if statement " << endl;
        else s.insert(it.second);
    }
    return 0;
}