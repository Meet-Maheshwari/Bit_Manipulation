//This file includes code for updating ith bit by 1 or 0.

#include<iostream>
using namespace std;

void updateIthBit(int num, int i, int val) {
    num = num & ~(1 << i); //Clearing ith bit
    num = num | (val << i);

    cout << num;
}

int main() {
    int n = 7;
    int i = 3;
    int val = 1;

    updateIthBit(n, i, val);

}