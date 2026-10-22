#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

void popFront(Node*& head)
{
    //  tikriname 
    if (head == nullptr)
    {
        return;
    }

    // 2. isaugom i laikina 
    Node* temp = head;

    // perkelti elementa 
    head = head->next;

    // istrinti
    delete temp;
}

void printList(Node* head)
{
    if (head == nullptr)
    {
        cout << "[Tuscias sarasas]" << endl;
        return;
    }

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
    // 10 -> 20 -> 30
    Node* n1 = new Node{10, nullptr};
    Node* n2 = new Node{20, nullptr};
    Node* n3 = new Node{30, nullptr};
    n1->next = n2;
    n2->next = n3;
    Node* head = n1;

    cout << "Pradzia (daug elementu): ";
    printList(head);

    popFront(head);
    cout << "Po popFront: ";
    printList(head);

    // 2 atvejis: Vienas elementas (pašaliname 20, kad liktų tik 30)
    popFront(head);
    cout << "\nKai liko vienas elementas: ";
    printList(head);

    popFront(head);
    cout << "Po vienintelio elemento pasalinimo: ";
    printList(head);

    // 3 atvejis: Tuščias sąrašas (bandome trinti iš tuščio)
    popFront(head);
    cout << "\nPo popFront ant tuscio saraso (programa nenuluzo): ";
    printList(head);

    return 0;
}
