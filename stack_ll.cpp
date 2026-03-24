#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int val) {  
        data = val;
        next = nullptr;
    }
};

class Stack {
    Node* top;  
public:
    Stack() {
        top = nullptr; 
    }

    void push(int x) {
        Node* newNode = new Node(x);  
        newNode->next = top;           
        top = newNode;                
        cout << x << " pushed onto stack.\n";
    }

    void pop() {
        if (top == nullptr) {
            cout << "Stack Underflow!\n";
            return;
        }
        Node* temp = top;
        cout << top->data << " popped from stack.\n";
        top = top->next;   
        delete temp;    
    }

    void peek() {
        if (top == nullptr) {
            cout << "Stack is Empty!\n";
            return;
        }
        cout << "Top element: " << top->data << endl;
    }
};

int main() {
    Stack st;
    int choice, value;
    do {
        cout << "\n--- Choose any Stack Operation ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                st.push(value);
                break;
            case 2:
                st.pop();
                break;
            case 3:
                st.peek();
                break;
            case 4:
                cout << "Exit\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while(choice != 4);
    return 0;
}
