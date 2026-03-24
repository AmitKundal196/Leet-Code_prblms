#include<iostream>
using namespace std;
struct node{
    int data;
    struct node*next;
};
struct node*top=0;
void push(){
    int x;
    cout<<"enter a number to be pushed"<<endl;
    cin>>x;
    node*newnode=new node();
    newnode->data=x;
    newnode->next=top;
    top= newnode;
}
void display(){
     struct node*temp;
     temp=top;
     if(temp==0)
     cout<<"stack is empty"<<endl;
     else{
        while(temp!=0){
            cout<<temp->data;
            temp=temp->next;
        }
     }
}
 void peek(){
    if(top==0)
    cout<<"stack is empty"<<endl;
    else{
        cout<<"top element is "<<top->data<<endl;
    }
 }
 void pop(){
    struct node*temp;
    temp=top;
    if(top==0)
    cout<<"stack is empty"<<endl;
    else{
        cout<<"popped"<<" "<<top->data;
        top=top->next;
        delete temp;
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
    }while(choice!=5);
    return 0;
}