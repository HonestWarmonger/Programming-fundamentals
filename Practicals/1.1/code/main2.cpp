/*
 * Done by:
 * Student Name: Dziabenko Oleksandr
 * Student Group: 121
 * Practical 1.1
 * Part 2
 */

#include <iostream>
using namespace std;

int main() {

    int A = 10;
    int B = 8;

    int C = A;
    int D = B;

    A = D;
    B = C;
    cout << "A:" << A << endl;
    cout << "B:" << B << endl;

    return 0;

}