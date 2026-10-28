#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

// Užduotyje reikalaujama funkcija
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
    int n;
    cout << "Kiek skaičių nori įvesti? ";
    cin >> n;

    Node* head = nullptr;
    Node* tail = nullptr;

    if (n > 0)
    {
        cout << "Įvesk " << n << " skaičius (-ius):" << endl;
        for (int i = 0; i < n; ++i)
        {
            int val;
            cin >> val;

            Node* newNode = new Node{val, nullptr};

            if (head == nullptr)
            {
                head = newNode;
                tail = newNode;
            }
            else
            {
                tail->next = newNode;
                tail = newNode;
            }
        }
    }

    // Rezultatas pagal užduoties formatą
    cout << "\nRezultatas: " << countNodes(head) << endl;

    // Atminties atlaisvinimas (gera praktika)
    Node* current = head;
    while (current != nullptr)
    {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;
}
