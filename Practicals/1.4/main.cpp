/*
 * Done by:
 * Student Name: Dziabenko Oleksandr
 * Student Group: 121
 * Practical 1.4
 */

#include <iostream>
#include <cmath> // Для функції pow
using namespace std;

// Функція для обчислення значення N-го елемента послідовності
int getNthElement(int N) {
    // Приклад послідовності: a_n = 2 * N + 1
    return 2 * N + 1;
}

// Функція для знаходження середнього арифметичного непарних чисел на проміжку від 0 до N
double averageOfOddNumbers(int N) {
    int sum = 0;
    int count = 0;
    for (int i = 1; i <= N; i += 2) {
        sum += i;
        count++;
    }
    return count == 0 ? 0 : static_cast<double>(sum) / count;
}

// Функція для знаходження середнього арифметичного перших n елементів геометричної прогресії
double averageOfGeometricProgression(double b1, double q, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += b1 * pow(q, i);
    }
    return sum / n;
}

int main() {
    int choice;

    cout << "Оберіть завдання:\n";
    cout << "1. Обчислення N-го елемента послідовності\n";
    cout << "2. Середнє арифметичне непарних чисел на проміжку від 0 до N\n";
    cout << "3. Середнє арифметичне перших n елементів геометричної прогресії\n";
    cout << "Ваш вибір: ";
    cin >> choice;

    if (choice == 1) {
        int N;
        cout << "Введіть N: ";
        cin >> N;
        cout << "N-й елемент послідовності: " << getNthElement(N) << endl;
    }
    else if (choice == 2) {
        int N;
        cout << "Введіть N: ";
        cin >> N;
        cout << "Середнє арифметичне непарних чисел: " << averageOfOddNumbers(N) << endl;
    }
    else if (choice == 3) {
        double b1, q;
        int n;
        cout << "Введіть перший член прогресії b1, знаменник q та кількість елементів n: ";
        cin >> b1 >> q >> n;
        cout << "Середнє арифметичне перших " << n << " елементів прогресії: " << averageOfGeometricProgression(b1, q, n) << endl;
    }
    else {
        cout << "Невірний вибір!" << endl;
    }

    return 0;
}