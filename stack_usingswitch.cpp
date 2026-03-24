#include <iostream>
using namespace std;
#define MAX 100
class Stack {
    int arr[MAX];
    int top;
public:
    Stack()
    {
        top = -1;
    }
void push(int x)
   {
        if (top >= MAX - 1) {
            cout << "Stack Overflow!\n";
            return;
        }
        arr[++top] = x;
        cout << x << " pushed onto stack.\n";
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow!\n";
            return;
        }
        cout << arr[top--] << " popped from stack.\n";
    }
    void peek() {
        if (top == -1) {
            cout << "Stack is Empty!\n";
            return;
        }
        cout << "Top element: " << arr[top] << endl;
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