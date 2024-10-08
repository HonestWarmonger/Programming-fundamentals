/**
 * PART 3
 * Done by:
 * Student Name: Dziabenko Oleksandr
 * Student Group: 121
 * Lab 2.1
 */

#include <iostream>
using namespace std;

int main() {
    // Оголошуємо двовимірний масив 5x5
    int matrix[5][5] = {
        { 1, 2, 3, 4, 5 },
        { 6, 7, 8, 9, 10 },
        { 11, 12, 13, 14, 15 },
        { 16, 17, 18, 19, 20 },
        { 21, 22, 23, 24, 25 }
    };

    // Оголошуємо змінну для зберігання суми
    int side_diag_sum = 0;

    // Виводимо масив на екран, щоб студент бачив дані
    cout << "Двовимірний масив:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Обчислюємо суму елементів побічної діагоналі
    for (int i = 0; i < 5; i++) {
        side_diag_sum += matrix[i][4 - i]; // Елементи побічної діагоналі
    }

    // Виводимо суму побічної діагоналі
    cout << "Сума елементів побічної діагоналі: " << side_diag_sum << endl;

    // Створюємо одновимірний масив з одним елементом
    int result_array[1];
    result_array[0] = side_diag_sum;

    // Виводимо значення одновимірного масиву
    cout << "Одновимірний масив (сума побічної діагоналі): " << result_array[0] << endl;

    return 0;
}