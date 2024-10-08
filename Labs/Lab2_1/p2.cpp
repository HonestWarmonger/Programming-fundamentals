/**
 * PART 2
 * Done by:
 * Student Name: Dziabenko Oleksandr
 * Student Group: 121
 * Lab 2.1
 */

#include <iostream>
using namespace std;

int main() {
    const int N = 10; // Розмір масивів
    char arr1[N], arr2[N], arr3[N]; // Три масиви типу char

    // Ініціалізація першого масиву
    for (int i = 0; i < N; i++) {
        arr1[i] = 62 + 3 * i;
    }

    // Ініціалізація другого масиву
    for (int i = 0; i < N; i++) {
        arr2[i] = 48 - i;
    }

    // Ініціалізація третього масиву
    for (int i = 0; i < N; i++) {
        arr3[i] = (arr1[i] == arr2[i]) ? arr1[i] : arr2[i];
    }

    // Виведення третього масиву
    cout << "Третій масив: ";
    for (int i = 0; i < N; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    // Пошук елементу з мінімальним кодом
    char min_element = arr3[0];
    for (int i = 1; i < N; i++) {
        if (arr3[i] < min_element) {
            min_element = arr3[i];
        }
    }

    // Виведення елемента з мінімальним кодом
    cout << "Елемент з мінімальним кодом: " << min_element << endl;

    return 0;
}