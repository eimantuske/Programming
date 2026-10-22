#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

// Papildomos užduoties struktūra su head ir tail
struct LinkedList
{
    Node* head = nullptr;
    Node* tail = nullptr;
};

// 1. Paprastas pushBack (tik su head) -> O(n)
void pushBack(Node*& head, int value)
{
    Node* newNode = new Node{value, nullptr};

    // Jei sąrašas tuščias, naujas mazgas tampa pirmuoju
    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    // Einame iki paskutinio mazgo
    Node* current = head;
    while (current->next != nullptr)
    {
        current = current->next;
    }

    // Prijungiame naują mazgą prie paskutinio
    current->next = newNode;
}

// 2. Papildoma užduotis: pushBack su head ir tail -> O(1)
void pushBackWithTail(LinkedList& list, int value)
{
    Node* newNode = new Node{value, nullptr};

    // Jei sąrašas tuščias, ir head, ir tail rodo į naują mazgą
    if (list.head == nullptr)
    {
        list.head = newNode;
        list.tail = newNode;
        return;
    }

    // Prijungiame tiesiai prie paskutinio mazgo (be ciklo!)
    list.tail->next = newNode;
    list.tail = newNode; // Atnaujiname tail, kad rodytų į naują galą
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
    
    Node* n1 = new Node{10, nullptr};
    Node* n2 = new Node{20, nullptr};
    Node* n3 = new Node{30, nullptr};

    n1->next = n2;
    n2->next = n3;
    Node* head = n1;

    cout << "Pradzia: ";
    printList(head);

    pushBack(head, 40);

    cout << "Po pushBack(40): ";
    printList(head);

    // === PAPILDOMA UŽDUOTIS (su tail) ===
    cout << "\nPapildoma uzduotis " << endl;
    LinkedList myList;
    pushBackWithTail(myList, 10);
    pushBackWithTail(myList, 20);
    pushBackWithTail(myList, 30);
    pushBackWithTail(myList, 40);

    cout << "Sarasas su tail: ";
    printList(myList.head);

    return 0;
}
