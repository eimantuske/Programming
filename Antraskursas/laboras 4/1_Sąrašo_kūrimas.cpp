#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

// Funkcija atspausdinti sąrašą
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
    int n;
    cout << "Kiek skaiciu nori ivesti? ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Sarasas tuščias." << endl;
        return 0;
    }

    Node* head = nullptr;
    Node* tail = nullptr; // Rodyklė į paskutinį elementą, kad galėtume greitai pridėti naują gale

    cout << "Ivesk " << n << " skaicius:" << endl;
    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;

        // Sukuriam naują mazgą
        Node* newNode = new Node{val, nullptr};

        if (head == nullptr)
        {
            // Jei sąrašas tuščias, naujas mazgas tampa ir pradžia, ir pabaiga
            head = newNode;
            tail = newNode;
        }
        else
        {
            // Prijungiame prie esamo sąrašo galo ir atnaujiname tail
            tail->next = newNode;
            tail = newNode;
        }
    }

    cout << "\nsukurtas sarasas:" << endl;
    printList(head);

    // (Papildomai) Atminties atlaisvinimas, kad nebūtų „memory leak“
    Node* current = head;
    while (current != nullptr)
    {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;
}
