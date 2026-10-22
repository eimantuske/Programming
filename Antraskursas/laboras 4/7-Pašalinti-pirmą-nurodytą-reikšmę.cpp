#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

bool remove(Node*& head, int value)
{
    // 1. Jei sąrašas tuščias – nėra ką šalinti
    if (head == nullptr)
    {
        return false;
    }

    // 2. Jei ieškoma reikšmė yra pačiame pirmame mazge (head)
    if (head->data == value)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
        return true;
    }

    // 3. Ieškome elemento toliau sąraše (sustojame PRIEŠ šalinamą mazgą)
    Node* current = head;
    while (current->next != nullptr && current->next->data != value)
    {
        current = current->next;
    }

    // 4. Jei radome mazgą (current->next rodo į jį)
    if (current->next != nullptr)
    {
        Node* temp = current->next;          // Įsimename šalinamą mazgą
        current->next = current->next->next; // „Peršokame“ jį (sujungiame grandinę)
        delete temp;                         // Ištriname iš atminties
        return true;
    }

    // 5. Jei perėjome visą sąrašą ir reikšmės neradome
    return false;
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
    // Sukuriame sąrašą: 10 -> 20 -> 30 -> 20 -> 40
    Node* n1 = new Node{10, nullptr};
    Node* n2 = new Node{20, nullptr};
    Node* n3 = new Node{30, nullptr};
    Node* n4 = new Node{20, nullptr};
    Node* n5 = new Node{40, nullptr};

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    Node* head = n1;

    cout << "Pradzia: ";
    printList(head);

    // Pašaliname pirmą rastą 20
    remove(head, 20);
    cout << "Po remove(head, 20): ";
    printList(head);

    // Bandome pašalinti reikšmę, kurios nėra (pvz., 99)
    remove(head, 99);
    cout << "Po remove(head, 99) (sarasas nepakito): ";
    printList(head);

    return 0;
}
