
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head = NULL;

void insertAtBeginning()
{
    Node* newNode = new Node;

    cout << "Enter data: ";
    cin >> newNode->data;

    newNode->next = head;
    head = newNode;

    cout << "NODE ADDED SUCCESSFULLY" << endl;
}

void displayLinkedList()
{
    Node* temp = head;

    cout << "LINKED LIST: ";

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main()
{
    int choice;

    do
    {
        cout << "\n1. INSERT AT BEGINNING" << endl;
        cout << "2. DISPLAY LINKED LIST" << endl;
        cout << "3. EXIT" << endl;
        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice)
        {
            case 1:
                insertAtBeginning();
                break;

            case 2:
                displayLinkedList();
                break;

            case 3:
                cout << "EXITING PROGRAM" << endl;
                break;

            default:
                cout << "INVALID CHOICE" << endl;
        }

    } while (choice != 3);

    // Free allocated memory
    while (head != NULL)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
