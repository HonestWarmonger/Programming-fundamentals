/**
 * Done by:
 * Student Name: Dziabenko Oleksandr
 * Student Group: 121
 * Lab 2.3
 */
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = nullptr;
Node* rear = nullptr;

int indexedArray[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

void enqueue(int value) {
    Node* newNode = new Node{ value, nullptr };
    if (rear == nullptr) {
        front = rear = newNode;
    }
    else {
        rear->next = newNode;
        rear = newNode;
    }
}

void dequeue() {
    if (front == nullptr) return;
    Node* temp = front;
    front = front->next;
    if (front == nullptr) rear = nullptr;
    delete temp;
}

void initializeQueue(int N) {
    for (int i = 0; i < N; ++i) {
        enqueue(indexedArray[i]);
    }
}

void removeElements(int M) {
    for (int i = 0; i < M && front != nullptr; ++i) {
        dequeue();
    }
}

void printQueue() {
    Node* temp = front;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int N = 5;
    int M = 3;

    initializeQueue(N);
    cout << "Queue after initialization: ";
    printQueue();

    removeElements(M);
    cout << "Queue after removing " << M << " elements: ";
    printQueue();

    return 0;
}