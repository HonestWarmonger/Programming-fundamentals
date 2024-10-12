/**
 * Done by:
 * Student Name: Dziabenko Oleksandr
 * Student Group: 121
 * Lab 2.2
 */

#include <iostream>
using namespace std;

// 1. Опис пойменованого типу
struct Student {
    string name;
    int course;
    bool army; // Чи служив в армії
};

// 3. Опис перелічувального типу
enum Names { Andriy, Maksym, Vitaliy, Yulia, Oleksandr, Svitlana, Bohdan };

int main() {
    // 2. Опис масиву пойменованого типу
    Student students[7];

    // 4. Ініціалізація масивів курсів і служби в армії
    int courses[7] = { 1, 2, 5, 3, 5, 4, 5 }; // Курс студентів
    bool army[7] = { false, false, true, false, true, false, true }; // Чи служив студент в армії

    // 5. Ініціалізація масиву студентів
    for (int i = 0; i < 7; i++) {
        students[i].name = (Names)i == Andriy ? "Andriy" : (Names)i == Maksym ? "Maksym" : (Names)i == Vitaliy ? "Vitaliy" :
            (Names)i == Yulia ? "Yulia" : (Names)i == Oleksandr ? "Oleksandr" : (Names)i == Svitlana ? "Svitlana" : "Bohdan";
        students[i].course = courses[i];
        students[i].army = army[i];
    }

    // 6. Обробка масиву - виведення студентів 5-го курсу, що служили в армії
    cout << "Students from the 5th course who served in the army:\n";
    for (int i = 0; i < 7; i++) {
        if (students[i].course == 5 && students[i].army) {
            cout << "Name: " << students[i].name << ", Course: " << students[i].course << endl;
        }
    }

    return 0;
}