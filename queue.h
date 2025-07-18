#ifndef QUEUE_H
#define QUEUE_H
#include<iostream>
using namespace std;
#define MAX 100

struct queue {
    int arr[MAX];
    int front = -1, rear = -1;

    bool is_full() {
        return rear == MAX - 1;
    }

    bool is_empty() {
        return front == -1 || front > rear;
    }

    void enque(int val) {
        if (!is_full()) {
            if (front == -1 && rear == -1) {
                front = rear = 0;
            } else {
                rear++;
            }
            arr[rear] = val;
        } else {
            cout << "queue is full" << endl;
        }
    }

    void deque() {
        if (is_empty()) {
            cout << "queue is empty" << endl;
        } else {
            if (front == rear) {
                front = rear = -1;
            } else {
                front++;
            }
        }
    }

    void peep() {
        if (is_empty()) {
            cout << "queue is empty" << endl;
        } else {
            cout << "peep element is : " << arr[front] << endl;
        }
    }

    void display() {
        if (is_empty()) {
            cout << "queue is empty" << endl;
        } else {
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

#endif

