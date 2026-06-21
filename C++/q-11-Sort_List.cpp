<<<<<<< HEAD
// Program : Sort List
// Example :
// Input: head = [4,2,1,3]
// Output: [1,2,3,4]

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *createNode(int value)
{
    Node *newNode = new Node();

    newNode->data = value;
    newNode->next = NULL;

    return newNode;
}

void insert(Node *&head, int value)
{
    Node *newNode = createNode(value);

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }
}

void sortList(Node *head)
{
    Node *i;
    Node *j;

    for (i = head; i != NULL; i = i->next)
    {
        for (j = i->next; j != NULL; j = j->next)
        {
            if (i->data > j->data)
            {
                int temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}

void display(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;

    int n, value;

    cout << "Enter number of nodes : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter value : ";
        cin >> value;

        insert(head, value);
    }

    sortList(head);

    cout << "Sorted List : ";
    display(head);

    return 0;
=======
// Program : Sort List
// Example :
// Input: head = [4,2,1,3]
// Output: [1,2,3,4]

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *createNode(int value)
{
    Node *newNode = new Node();

    newNode->data = value;
    newNode->next = NULL;

    return newNode;
}

void insert(Node *&head, int value)
{
    Node *newNode = createNode(value);

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }
}

void sortList(Node *head)
{
    Node *i;
    Node *j;

    for (i = head; i != NULL; i = i->next)
    {
        for (j = i->next; j != NULL; j = j->next)
        {
            if (i->data > j->data)
            {
                int temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}

void display(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;

    int n, value;

    cout << "Enter number of nodes : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter value : ";
        cin >> value;

        insert(head, value);
    }

    sortList(head);

    cout << "Sorted List : ";
    display(head);

    return 0;
>>>>>>> ab914866348b886c4eb0416d91c509dc2ac4d7bf
}