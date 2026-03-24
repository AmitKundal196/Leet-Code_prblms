#include<iostream>
using namespace std;

#define N 5
int stack[N];
int top = -1;

void push(){
    int x;
    cout << "enter number to be pushed: ";
    cin >> x;

    if(top == N-1){
        cout << "stack overflow" << endl;
    }
    else{
        top++;
        stack[top] = x;
        cout << "pushed " << x << endl;
    }
}

void pop(){
    if(top == -1){
        cout << "stack underflow" << endl;
    }
    else{
        int item = stack[top];
        top--;
        cout << "popped " << item << endl;
    }
}

void peek(){
    if(top == -1){
        cout << "stack underflow" << endl;
    }
    else{
        cout << "top element = " << stack[top] << endl;
    }
}

void display(){
    if(top == -1){
        cout << "stack is empty" << endl;
    }
    else{
        cout << "stack elements:" << endl;
        for(int i = top; i >= 0; i--){
            cout << stack[i] << endl;
        }
    }
}

int main(){
    int choice;

    do{
        cout << "\nenter operation\n";
        cout << "1. push\n";
        cout << "2. pop\n";
        cout << "3. peek\n";
        cout << "4. display\n";
        cout << "5. exit\n";
        cin >> choice;

        switch(choice){
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: cout<<"exiting...\n"; break;
            default: cout << "invalid choice\n";
        }

    } while(choice != 5);

    return 0;
}
