/**
 * PART 1
 * Done by:
 * Student Name: Dziabenko Oleksandr
 * Student Group: 121
 * Lab 2.1
 */

#include <iostream>
#include <algorithm> // Для сортування
using namespace std;

int main() {
    const int N = 10; // Розмір масиву
    double arr[N]; // Масив дійсних чисел

    // Ініціалізація масиву
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) { // Парний індекс
            arr[i] = 15.68 + 3 * i;
        }
        else { // Непарний індекс
            arr[i] = 15.68 - 3 * i;
        }
    }

    // Виведення масиву перед сортуванням
    cout << "Масив перед сортуванням: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Сортування масиву за спаданням
    sort(arr, arr + N, greater<double>());

    // Виведення масиву після сортування
    cout << "Масив після сортування: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}