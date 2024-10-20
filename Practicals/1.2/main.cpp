/*
 * Done by:
 * Student Name: Dziabenko Oleksandr
 * Student Group: 121
 * Practical 1.2
 */

#include <iostream>

using namespace std;


void task2();
void task3();
void task4();
void task5();

// task 1
int main() {
    cout << "Enter the number : " << endl;
    int A;
    cin >> A;
    if (A > 0) {
        A++;//A=A+1
    }
    else {
        A = A - 2;
    }
    cout << "A = " << A << endl;

    task2();
}
// task 2
void task2() {
    cout << "Enter the number A: " << endl;
    int A;
    cin >> A;
    cout << "Enter the number B: " << endl;
    int B;
    cin >> B;

    if (A == B) {
        cout << "A is equal to B" << endl;
    }
    else {
        cout << "A is not equal to B" << endl;
    }

    task3();
}

//task3
void task3() {
    cout << "Enter the number A: " << endl;
    int A;
    cin >> A;
    cout << "Enter the number B: " << endl;
    int B;
    cin >> B;
    if (A != B) {
        A = B;
    }
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    task4();
}

//task 4
void task4() {
    cout << "Enter the number A: " << endl;
    int A;
    cin >> A;
    cout << "Enter the number B (not equal A): " << endl;
    int B;
    cin >> B;

    int dif;
    if (A > B) {
        dif = A - B;
    }
    else {
        dif = B - A;
    }
    cout << "dif = " << dif << endl;

    task5();
}

//task5
void task5() {
    cout << "Enter the number A: " << endl;
    int A;
    cin >> A;
    if (A < 0) {
        A *= -1; // A=A*(-1)
    }
    cout << "|A| = " << A << endl;
}
