// Program :  Merge Two Sorted Lists
// Example :
// Input: list1 = [1,2,4], list2 = [1,3,4]
// Output: [1,1,2,3,4,4]

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

Node *mergeLists(Node *list1, Node *list2)
{
    Node dummy;
    Node *tail = &dummy;

    dummy.next = NULL;

    while (list1 != NULL && list2 != NULL)
    {
        if (list1->data <= list2->data)
        {
            tail->next = list1;
            list1 = list1->next;
        }
        else
        {
            tail->next = list2;
            list2 = list2->next;
        }

        tail = tail->next;
    }

    if (list1 != NULL)
    {
        tail->next = list1;
    }
    else
    {
        tail->next = list2;
    }

    return dummy.next;
}

void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    Node *list1 = NULL;
    Node *list2 = NULL;

    int n1, n2, value;

    cout << "Enter size of list1 : ";
    cin >> n1;

    for (int i = 0; i < n1; i++)
    {
        cin >> value;
        insert(list1, value);
    }

    cout << "Enter size of list2 : ";
    cin >> n2;

    for (int i = 0; i < n2; i++)
    {
        cin >> value;
        insert(list2, value);
    }

    Node *merged = mergeLists(list1, list2);

    cout << "Merged List : ";
    display(merged);

    return 0;
}