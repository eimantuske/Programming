#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

void pushFront(Node*& head, int value)
{
    Node* newNode = new Node{value, head};
    head = newNode;
}

void printList(Node* head)
{
    Node* current = head;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main()
{
    // Pradžia: 20 -> 30 -> 40
    Node* n1 = new Node{20, nullptr};
    Node* n2 = new Node{30, nullptr};
    Node* n3 = new Node{40, nullptr};

    n1->next = n2;
    n2->next = n3;

    Node* head = n1;

    cout << "Pradzia: ";
    printList(head);

    // Įterpiame 10 į pradžią
    pushFront(head, 10);

    cout << "Rezultatas: ";
    printList(head);

    return 0;
}
