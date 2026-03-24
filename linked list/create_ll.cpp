#include<iostream>
using namespace std;
class Node{
    public:
 int data;
  Node*Next;
  Node(int value){
    data=value;
    Next=NULL;
  }
};
int cmain(){
    Node  *head;
    head=NULL;
    //head= new Node(6);
    //cout<<head->data<<endl;
   // cout<<head->Next<<endl;
    int arr[]={2,4,6,8,10};
    
    //insert the node at beginning
    //linked list does not exit 
    for(int i=0;i<5;i++){
    if(head==NULL){
        head= new Node(arr[i]);
    }
    //linked list exist
    else{
         Node *temp;
         temp=new Node(arr[i]);
         temp->Next=head;
         head=temp;
    }
  }
    //print the value
    Node *temp=head;
     while (temp!=NULL){
        cout<<temp->data<<"";
        temp=temp->Next;
     };
     return 0;
    }
    
  

