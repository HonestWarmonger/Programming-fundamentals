/**
 * Done by:
 * Student Name: Dziabenko Oleksandr
 * Student Group: 121
 * Lab 2.4
 */

#include <iostream>
#include <iomanip>
#include <cmath>

// Функція для обчислення значення y
double calculateFunction(double x) {
    if (x >= 0) {
        return 4 * x * x + 2;
    }
    else {
        double product = 1.0;
        for (int i = 1; i <= 4; ++i) {
            product *= (x + 1.0 / i);
        }
        return 1.0 / product;
    }
}

// Головна програма для табуляції функції
int main() {
    double x_start = -5.4;
    double x_end = 4.0;
    double step = 0.3;

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "Табуляція функції на інтервалі [" << x_start << ", " << x_end << "] з кроком " << step << ":\n";
    std::cout << "--------------------------------------------\n";
    std::cout << "|    x    |     y(x)     |\n";
    std::cout << "--------------------------------------------\n";

    for (double x = x_start; x <= x_end; x += step) {
        double y = calculateFunction(x);
        std::cout << "| " << std::setw(7) << x << " | " << std::setw(12) << y << " |\n";
    }

    std::cout << "--------------------------------------------\n";
    return 0;
}