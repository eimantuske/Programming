#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

bool contains(Node* head, int value)
{
    Node* current = head;
    while (current != nullptr)
    {
        if (current->data == value)
        {
            return true;
        }
        current = current->next;
    }
    return false;
}

int main()
{
    // Sukuriame sąrašą: 10 -> 20 -> 30 -> 40
    Node* n1 = new Node{10, nullptr};
    Node* n2 = new Node{20, nullptr};
    Node* n3 = new Node{30, nullptr};
    Node* n4 = new Node{40, nullptr};

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    Node* head = n1;

    // boolalpha padaro, kad konsolėje spausdintų "true/false", o ne "1/0"
    cout << boolalpha;
    cout << "contains(head, 30) -> " << contains(head, 30) << endl;
    cout << "contains(head, 15) -> " << contains(head, 15) << endl;

    return 0;
}