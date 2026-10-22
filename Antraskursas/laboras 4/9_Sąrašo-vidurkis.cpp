#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

// Pagalbinė funkcija pažymių pridėjimui į sąrašo galą
void pushBack(Node*& head, int value)
{
    Node* newNode = new Node{value, nullptr};

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node* current = head;
    while (current->next != nullptr)
    {
        current = current->next;
    }
    current->next = newNode;
}

// Užduoties funkcija: vidurkio skaičiavimas
double average(Node* head)
{
    // Saugiklis: jei sąrašas tuščias, kad nedalintų iš 0
    if (head == nullptr)
    {
        return 0.0;
    }

    int sum = 0;
    int count = 0;
    Node* current = head;

    while (current != nullptr)
    {
        sum += current->data; // Pridedame pažymį prie bendros sumos
        count++;              // Skaičiuojame, kiek iš viso yra pažymių
        current = current->next;
    }

    // 
    return (double)sum / count;
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
    Node* head = nullptr;
    int kiekis;

    cout << "Kiek pazymiu norite ivesti? ";
    cin >> kiekis;

    for (int i = 0; i < kiekis; i++)
    {
        int pazymys;
        cout << "Iveskite " << i + 1 << "-aji pazymi: ";
        cin >> pazymys;
        pushBack(head, pazymys);
    }

    cout << "\nIvesti pazymiai: ";
    printList(head);

    cout << "Pazymiu vidurkis: " << average(head) << endl;

    return 0;
}
