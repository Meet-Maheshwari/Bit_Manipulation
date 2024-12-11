//This includes code for clearing i number of bits from the end

#include<iostream>
using namespace std;

void clearLastIBits(int num, int i) {
    num = num & (~(0) << i);

    cout << num;
}

int main() {
    clearLastIBits(15, 2);
}