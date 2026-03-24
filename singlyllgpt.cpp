#include <iostream>
using namespace std;
struct node
{
    int info;
    struct node *next;
};
typedef struct node N;
class singlyll
{
public:
    N *root = NULL;
    N *getNode()
    {
        N *x;
        x = (N *)malloc(sizeof(N));
        return x;
    }
    void createsinglylinkedlist(int item)
    {
        N *temp;
        temp = getNode();
        temp->info = item;
        temp->next = NULL;
        if (root == NULL)
        {
            root = temp;
        }
        else
        {
            N *p = root, *q;
            while (p != NULL)
            {
                q = p;
                p = p->next;
            }
            q->next = temp;
        }
    }
    void displayLinedList()
    {
        N *p = root;
        cout << "Item in the Singly LL are as :";
        while (p != NULL)
        {
            cout << p->info << " ";
            p = p->next;
        }
        cout << endl;
    }
    void insertatStart(int item)
    {
        N *temp, *p;
        p = root;
        temp = getNode();
        temp->info = item;
        temp->next = p;
        root = temp;
    }
    void insertAtEndRecursive(N *&p, int item)
    {
        if (p == NULL)
        {
            p = getNode();
            p->info = item;
            p->next = NULL;
            return;
        }
        insertAtEndRecursive(p->next, item);
    }
    void insertAtMiddle(int pos, int item)
    {
        N *temp, *p;
        temp = getNode();
        temp->info = item;

        if (pos <= 1 || root == NULL) 
        {
            temp->next = root;
            root = temp;
            return;
        }

        p = root;
        for (int i = 1; i < pos - 1 && p->next != NULL; i++)
        {
            p = p->next;
        }
        temp->next = p->next;
        p->next = temp;
    }
};
int main()
{
    int choice, nodes, item, pos;
    singlyll ob;
    while (1)
    {
        cout << "1. Create singly Linked List:" << endl;
        cout << "2. Display singly Linked List:" << endl;
        cout << "3. Insert at start" << endl;
        cout << "4. Insert at end" << endl;
        cout << "5. Insert at middle" << endl;
        cout << "6. Exit" << endl;
        cout << "Please enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Please enter the total number of nodes: ";
            cin >> nodes;
            for (int i = 0; i < nodes; i++)
            {
                cout << "Please enter item: ";
                cin >> item;
                ob.createsinglylinkedlist(item);
            }
            break;

        case 2:
            ob.displayLinedList();
            break;

        case 3:
            cout << "Please enter item at beginning: ";
            cin >> item;
            ob.insertatStart(item);
            break;

        case 4:
            cout << "Please enter item at ending: ";
            cin >> item;
            ob.insertAtEndRecursive(ob.root, item);
            break;

        case 5:
            cout << "Enter position to insert: ";
            cin >> pos;
            cout << "Enter item: ";
            cin >> item;
            ob.insertAtMiddle(pos, item);
            break;

        case 6:
            exit(0);

        default:
            cout << "Invalid choice";
        }
    }
    return 0;
}
