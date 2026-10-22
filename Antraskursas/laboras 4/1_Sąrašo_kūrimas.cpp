#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

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
    Node* n4 = new Node{40, nullptr};
    Node* n5 = new Node{50, nullptr};

    // 10 -> 20 -> 30 -> 40 -> 50
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    
    printList(n1);

    return 0;
}