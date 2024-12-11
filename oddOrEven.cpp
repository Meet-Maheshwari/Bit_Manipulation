//This file has the code for checking whether a given number is even or odd.

#include<iostream>
using namespace std;

void oddOrEven(int n){
    if(!(n & 1)) {
        cout << "Even";
    } else {
        cout << "Odd";
    }
}

int main() {
    int n = 5;
    oddOrEven(8);
}