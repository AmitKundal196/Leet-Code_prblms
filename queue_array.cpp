#include<iostream>
using namespace std;
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(){
    int x;
    cout<<"enter number to be enqueue"<<" "<<endl;
    cin>>x;
    if(rear==N-1)
    cout<<"queue is overflow"<<endl;
    else if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;
    }
}
void dequeue(){
    if(front==-1 && rear==-1)
    cout<<"queue goes underflow condition"<<endl;
    else if(front==rear){
        front=rear=-1;
    }
    else{
        cout<<"the dequeue element is "<<" "<<queue[front]<<endl;
        front++;
    }

}
void display(){
    if(front==-1 && rear==-1)
    cout<<"queue is empty"<<endl;
    else{
        for(int i=front;i<rear+1;i++)
        cout<<"The queue is "<<" "<<queue[i]<<endl;
    }
}
void peek(){
    if(front==-1 && rear==-1)
    cout<<"queue is empty"<<endl;
    else{
        cout<<"top element is"<<queue[front]<<endl;

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
