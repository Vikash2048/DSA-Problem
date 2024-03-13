// i/p = 412  o/p = four one two

#include <bits/stdc++.h>
using namespace std;

void sayDigit(int num, string *numbers){
    if(num == 0) return;
    int index = num%10;
    sayDigit(num/10,numbers);
    cout << numbers[index] << " ";
}

int main()
{

    int num = 412;
    string numbers[] = {
        "zero", "One", "Two", "Three", "Four", "Five",
        "Six", "Seven", "Eight", "Nine", "Ten"};

    sayDigit(num,numbers);
    return 0;
}