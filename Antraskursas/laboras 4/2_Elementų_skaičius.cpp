#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

int countNodes(Node* head)
{
    int count = 0;
    Node* current = head;
    while (current != nullptr)
    {
        count++;
        current = current->next;
    }
    return count;
}

int main()
{
    //  10 -> 20 -> 30
    Node* n1 = new Node{10, nullptr};
    Node* n2 = new Node{20, nullptr};
    Node* n3 = new Node{30, nullptr};

    n1->next = n2;
    n2->next = n3;

    cout << "Saraso 10 -> 20 -> 30 rezultatas: " << countNodes(n1) << endl;

    // Tuscias sarasas
    Node* emptyHead = nullptr;
    cout << "Tuscio saraso rezultatas: " << countNodes(emptyHead) << endl;

    return 0;
}