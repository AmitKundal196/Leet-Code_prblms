#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Queue {
    Node* front;
    Node* rear;
public:
    Queue() {
        front = rear = NULL;
    }

    void enqueue(int x) {
        Node* temp = new Node();
        temp->data = x;
        temp->next = NULL;

        if (rear == NULL) {
            front = rear = temp;
        } else {
            rear->next = temp;
            rear = temp;
        }
        cout << x << " inserted\n";
    }

    void dequeue() {
        if (front == NULL) {
            cout << "Queue is empty\n";
            return;
        }
        Node* temp = front;
        front = front->next;

        if (front == NULL)
            rear = NULL;

        cout << temp->data << " deleted\n";
        delete temp;
    }

    void display() {
        Node* temp = front;
        if (temp == NULL) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}
