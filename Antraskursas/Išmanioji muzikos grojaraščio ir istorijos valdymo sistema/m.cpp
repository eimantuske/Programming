#include <iostream>
#include <cstdlib>

using namespace std;

struct Song{
    int id;
    string pavadinimas;
    string atlikejas;
    int trukme;
    Song* next;
};

struct QueueNode {
    Song data;
    QueueNode* next;
};

struct PlayQueue {
    QueueNode* front = nullptr;
    QueueNode* rear = nullptr;

    bool isEmpty() {
        return front == nullptr;
    }
};


void addSong(Song*& head){
    Song* newSong = new Song;
    
    newSong->id = rand() % 1000;
    
    cout << "Iveskite dainos pavadinima: ";
    cin >> newSong->pavadinimas;
    cout << "Iveskite dainos atlikeja: ";
    cin >> newSong->atlikejas;      
    cout << "Iveskite dainos trukme: ";
    cin >> newSong->trukme;
    newSong->next = nullptr;
    
    if (head == nullptr) {
        head = newSong;
    } else {
        Song* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newSong;
    }
    cout << ">> Daina prideta!\n";
}


int ShowListSongs(Song* head){
    if (head == nullptr) {
        cout << "Grojarastis tuscias." << endl;
        return 0;
    }
    
    cout << "\n--- JUSU GROJARASTIS ---\n";
    Song* current = head;
    while (current != nullptr) {
        cout << "ID: " << current->id
        << ", Pavadinimas: " << current->pavadinimas
        << ", Atlikejas: " << current->atlikejas
        << ", Trukme: " << current->trukme << endl;
        current = current->next;
    }
    cout << "------------------------\n";
    return 1;
}

void enqueueSong(PlayQueue& eile, Song* head) {
    if (head == nullptr) {
        cout << "Grojarastis tuscias. Nera ko deti i eile.\n";
        return;
    }

    ShowListSongs(head);
    cout << "Iveskite dainos ID, kuria norite prideti i eile: ";
    int id;
    cin >> id;

    Song* current = head;
    while (current != nullptr) {
        if (current->id == id) {
            QueueNode* newNode = new QueueNode;
            newNode->data = *current;
            newNode->next = nullptr;

            if (eile.rear == nullptr) {
                eile.front = newNode;
            } else {
                eile.rear->next = newNode;
            }
            eile.rear = newNode;
            cout << ">> Daina prideta i eile!\n";
            return;
        }
        current = current->next;
    }
    cout << "Daina su ID " << id << " nerasta.\n";
}

void StartMeniu(){
    cout << "\n";
    cout << "  .==========================================.\n";
    cout << "  |   _||_||_   M U S I C   B O X   _||_||_  |\n";
    cout << "  '=========================================='\n";
    cout << "   [1] + Prideti daina i grojarasti\n";
    cout << "   [2] # Perziureti grojarasti\n";
    cout << "   [3] > Prideti daina i laukimo eile\n";
    cout << "   [4] |> Paleisti daina is eiles\n";
    cout << "   [5] <| Grizti i praejusia daina (Undo)\n";
    cout << "   [6] * Rekursine paieska / spausdinimas\n";
    cout << "  --------------------------------------------\n";
    cout << "   [0] x Iseiti is programos\n";
    cout << "  ============================================\n";
    cout << "  Pasirinkimas -> ";
}

int main(){
    Song* head = nullptr;
    int choice = -1;

    while (choice != 0) {
        StartMeniu();
        cin >> choice;

        switch (choice) {
            case 1:
                addSong(head);
                break;

            case 2:
                ShowListSongs(head);
                break;
            
            case 3: {
                PlayQueue eile;
                enqueueSong(eile, head);
                break;
            }    
            
            case 0:
                cout << "Viso gero!\n";
                break;

            default:
                cout << "Neteisingas pasirinkimas.\n";
                break;
        }
    }
    return 0;
}