//This file includes code for getting, setting and clearing bit at ith index. Also there is function for 
//finding whether a number is power of two or not.

#include<iostream>
using namespace std;

int getIthBit(int n, int i) {
    int bitMask = 1 << i;

    if(!(n & bitMask)) {
        return 0;
    } else {
        return 1;
    }
}

int setIthBit(int n, int i) {
    int bitMask = 1 << i;

    return n | bitMask;
}

int clearIthBit(int n, int i) {
    int bitMask = ~(1 << i);

    return n & bitMask;
}

//Check whether a number is power of 2 or not
bool powerOfTwo(int num) {
    if(!(num & num-1)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    // cout << getIthBit(6, 1);

    // cout << setIthBit(6, 3);

    // cout << clearIthBit(6, 1);

    cout << powerOfTwo(2);
    cout << powerOfTwo(8);
    cout << powerOfTwo(7);
    cout << powerOfTwo(43);
}