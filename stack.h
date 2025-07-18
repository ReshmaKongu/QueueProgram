#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

#define MAX 100

struct Stack {
    int arr[MAX];
    int top = -1;

    // Check if stack is full
    bool is_full() {
        return top == MAX - 1;
    }

    // Check if stack is empty
    bool is_empty() {
        return top == -1;
    }

    // Push value onto the stack
    void push(int val) {
        if (is_full()) {
            cout << "Stack overflow! Cannot push " << val << endl;
        } else {
            arr[++top] = val;
        }
    }

    // Pop value from the stack
    void pop() {
        if (is_empty()) {
            cout << "Stack underflow! Stack is already empty." << endl;
        } else {
            top--;
        }
    }

    // View top element of the stack
    void peek() {
        if (is_empty()) {
            cout << "Stack is empty. No top element." << endl;
        } else {
            cout << "Top element is: " << arr[top] << endl;
        }
    }

    // Display all elements in the stack
    void display() {
        if (is_empty()) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

#endif

