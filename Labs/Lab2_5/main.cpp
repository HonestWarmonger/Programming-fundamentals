/**
 * Done by:
 * Student Name: Dziabenko Oleksandr
 * Student Group: 121
 * Lab 2.5
 */


#include <iostream>
#include <cmath>  // Для використання константи M_PI

// Рекурсивна функція для обчислення суми арифметичної прогресії
double sumArithmeticProgression(double start, double end, double step) {
    if (start < end) {
        return 0;
    } // Базовий випадок: якщо початкове значення менше кінцевого (убування завершено)

    // Додаємо поточний елемент та викликаємо функцію для наступного елемента
    return start + sumArithmeticProgression(start + step, end, step);
}

int main() {
    // Початкове та кінцеве значення прогресії
    double start = 3 * M_PI;
    double end = 4 * M_PI;
    double step = -M_PI / 2;

    // Виклик рекурсивної функції для обчислення суми
    double result = sumArithmeticProgression(start, end, step);

    // Виведення результату
    std::cout << "Сума елементів арифметичної прогресії: " << result << std::endl;

    return 0;
}