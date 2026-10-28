#include <iostream>

struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};

int countNodes(Node* head) {
    int count = 0;
    Node* current = head;
    
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    
    return count;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    std::cout << "Mazgu skaicius: " << countNodes(head) << std::endl;

    Node* emptyHead = nullptr;
    std::cout << "Tuscio saraso mazgu skaicius: " << countNodes(emptyHead) << std::endl;

    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    
    head = nullptr;

    return 0;
}