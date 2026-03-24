#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;
};
struct Node*front=0;
struct Node*rear=0;
void enqueue(){
    int x;
    cout<<"enter number to be enqueue"<<" "<<endl;
    cin>>x;
   Node*newNode= new Node();
   newNode->data=x;
   newNode->next=NULL;
    if(front==0&&rear==0)
    front=rear=newNode;
    else{
        rear->next=newNode;
        rear=newNode;
    }
}
void display(){
    Node*temp;
    if(front==0&&rear==0)
    cout<<"queue is empty";
    else{
        temp=front;
        while(temp!=0){
        cout<<"the front element is"<<" "<<temp->data<<endl;
       temp= temp->next;}
    }
}
void dequeue(){
    Node*temp;
    temp=front;
     if(front==0&&rear==0)
    cout<<"queue is empty";
    else{
        cout<<"the delete element is "<<" "<<front->data<<endl;
     front =front->next;
     delete temp;
    }
}
void peek(){
     if(front==0&&rear==0)
    cout<<"queue is empty";
    else{
        cout<<"the top element is"<<front->data<<endl;
    }
}
int main(){
    int choice;
    do{
         cout << "\nenter operation\n";
        cout << "1. enqueue\n";
        cout << "2. dequeue\n";
        cout << "3. peek\n";
        cout << "4. display\n";
        cout << "5. exit\n";
        cin >> choice;
    switch(choice){
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: cout<<"exiting...\n"; break;
            default: cout << "invalid choice\n";
    }
    }while(choice!=5);
    return 0;
}
