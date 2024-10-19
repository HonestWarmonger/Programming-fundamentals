/*
 * Done by:
 * Student Name: Dziabenko Oleksandr
 * Student Group: 121
 * Practical 1.1
 * Part 6
 */

#include <iostream>
using namespace std;

int main() {

    int a1 = 100;
    int d = 10;

    int A = a1;
    int B = d;

    int p1 = A - B;
    int p2 = A - (2 * B);
    int p3 = A - (3 * B);
    int p4 = A - (4 * B);
    int p5 = A - (5 * B);
    int sum = p1 + p2 + p3 + p4 + p5;

    cout << "Result:" << sum << endl;

    return 0;

}