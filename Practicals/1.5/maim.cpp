/*
 * Done by:
 * Student Name: Dziabenko Oleksandr
 * Student Group: 121
 * Practical 1.5
 */


#include <iostream>
#include <limits>
using namespace std;

// Функція для знаходження індексу першого входження P в послідовність A[n]
int findFirstOccurrence(int A[], int n, int P) {
    for (int i = 0; i < n; i++) {
        if (A[i] == P) {
            return i; // Повертаємо індекс першого входження
        }
    }
    return -1; // Якщо P не знайдено
}

// Функція для знаходження найменшого додатного елемента в послідовності A[n]
int findSmallestPositive(int A[], int n) {
    int minPositive = numeric_limits<int>::max();
    for (int i = 0; i < n; i++) {
        if (A[i] > 0 && A[i] < minPositive) {
            minPositive = A[i];
        }
    }
    return (minPositive == numeric_limits<int>::max()) ? -1 : minPositive; // Повертаємо -1, якщо немає додатних
}

// Функція для знаходження найбільшого та найменшого значень та їх обміну
void swapMaxMin(int A[], int n) {
    int maxIndex = 0, minIndex = 0;

    // Знаходимо індекси найбільшого і найменшого елементів
    for (int i = 1; i < n; i++) {
        if (A[i] > A[maxIndex]) {
            maxIndex = i;
        }
        if (A[i] < A[minIndex]) {
            minIndex = i;
        }
    }

    // Міняємо їх місцями
    int temp = A[maxIndex];
    A[maxIndex] = A[minIndex];
    A[minIndex] = temp;
}

int main() {
    int choice;
    cout << "Оберіть завдання:\n";
    cout << "1. Знайти індекс першого входження P у послідовність A[n]\n";
    cout << "2. Знайти найменше додатне значення у послідовності A[n]\n";
    cout << "3. Поміняти місцями найбільше та найменше значення в A[n]\n";
    cout << "Ваш вибір: ";
    cin >> choice;

    int n;
    cout << "Введіть кількість елементів послідовності: ";
    cin >> n;
    int A[n];
    cout << "Введіть елементи послідовності: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    if (choice == 1) {
        int P;
        cout << "Введіть значення P: ";
        cin >> P;
        int index = findFirstOccurrence(A, n, P);
        if (index != -1) {
            cout << "Індекс першого входження " << P << " в A[n]: " << index << endl;
        }
        else {
            cout << "Значення " << P << " не знайдено в A[n]." << endl;
        }
    }
    else if (choice == 2) {
        int smallestPositive = findSmallestPositive(A, n);
        if (smallestPositive != -1) {
            cout << "Найменше додатне значення в A[n]: " << smallestPositive << endl;
        }
        else {
            cout << "У послідовності немає додатних елементів." << endl;
        }
    }
    else if (choice == 3) {
        swapMaxMin(A, n);
        cout << "Послідовність після обміну найбільшого і найменшого елементів: ";
        for (int i = 0; i < n; i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
    else {
        cout << "Невірний вибір!" << endl;
    }

    return 0;
}