/*
 * Done by:
 * Student Name: Dziabenko Oleksandr
 * Student Group: 121
 * Practical 1.3
 */

#include <iostream>

using namespace std;

void task2();
void task3();
void task4();
void task5();

int main() {
    cout << "Enter A:" << endl;
    int A;
    cin >> A;
    cout << "Enter B:" << endl;
    int B;
    cin >> B;
    cout << "Enter C:" << endl;
    int C;
    cin >> C;

    int min;
    if (A < B) {
        if (A < C) {
            min = A;
        }
        else {
            min = C;
        }
    }
    else {
        if (B < C) {
            min = B;
        }
        else {
            min = C;
        }
    }
    cout << "Minimum number is " << min << endl;

    task2();
}


void task2() {
    cout << "Enter A:" << endl;
    int A;
    cin >> A;
    cout << "Enter B:" << endl;
    int B;
    cin >> B;
    cout << "Enter C:" << endl;
    int C;
    cin >> C;
    if (A == B) {
        if (A == C) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    else {
        cout << "No" << endl;
    }

    task3();
}

void task3() {
    cout << "Enter A:" << endl;
    int A;
    cin >> A;
    cout << "Enter B:" << endl;
    int B;
    cin >> B;
    cout << "Enter C:" << endl;
    int C;
    cin >> C;
    cout << "Enter D:" << endl;
    int D;
    cin >> D;
    if (A <= B) {
        if (B <= C) {
            if (C <= D) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
        else {
            cout << "No" << endl;
        }
    }
    else {
        cout << "No" << endl;
    }

    task4();
}

void task4() {
    cout << "Enter A:" << endl;
    int A;
    cin >> A;
    cout << "Enter B:" << endl;
    int B;
    cin >> B;
    cout << "Enter C:" << endl;
    int C;
    cin >> C;

    float S = 0;
    int n = 0;
    if (A > 0) {
        S += A;
        n++;
    }
    if (B > 0) {
        S += B;
        n++;
    }
    if (C > 0) {
        S += C;
        n++;
    }

    float avg;
    if (n != 0) {
        avg = S / n;
    }
    else {
        cout << "All negative" << endl;
        avg = 0;
    }
    cout << "Average is " << avg << endl;

    task5();

}

void task5() {
    cout << "Enter A:" << endl;
    int A;
    cin >> A;
    cout << "Enter B:" << endl;
    int B;
    cin >> B;
    cout << "Enter C:" << endl;
    int C;
    cin >> C;

    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }
    if (B > C) {
        int temp = B;
        B = C;
        C = temp;
    }
    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    cout << "C = " << C << endl;
}