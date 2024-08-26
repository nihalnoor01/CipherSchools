#include<iostream>
using namespace std;

class Queue {
    int queue[1000];
    int max_capacity;
    int front;
    int rear;
    int size;

public:
    // Constructor
    Queue() {
        this->front = 0;
        this->rear = -1;
        this->max_capacity = 1000;
        this->size = 0; 
    }

    void enqueue(int data) {
        if (size == max_capacity) {
            cout << "Maximum capacity has been reached ";
            return;
        }
        rear = (rear + 1) % max_capacity;
        queue[rear] = data;
        cout<<"The element "<<data<<" has been added"<<endl;
        size++;
    }

    void deque() {
        if (size == 0) {
            cout << "Queue is empty, cannot dequeue.";
            return;
        }
        cout << "The element to be dequeued is " << queue[front] << endl;
        front = (front + 1) % max_capacity;
        size--;
    }
};

int main() {
    Queue q; 

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.deque();
    q.deque();
    q.deque();
    q.deque(); 

    return 0;
}
