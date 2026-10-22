#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string name;
    double grade;
    Student* next;
};

// 1 - Pridėti studentą (į sąrašo galą)
void addStudent(Student*& head, string name, double grade)
{
    Student* newNode = new Student{name, grade, nullptr};

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Student* current = head;
    while (current->next != nullptr)
    {
        current = current->next;
    }
    current->next = newNode;
}

// 2 - Parodyti visus studentus
void printStudents(Student* head)
{
    if (head == nullptr)
    {
        cout << "Sarasas yra tuscias." << endl;
        return;
    }

    Student* current = head;
    int nr = 1;
    while (current != nullptr)
    {
        cout << nr << ". " << current->name << " " << current->grade << endl;
        current = current->next;
        nr++;
    }
}

// 3 - Surasti studentą pagal vardą
void findStudent(Student* head, string name)
{
    Student* current = head;
    while (current != nullptr)
    {
        if (current->name == name)
        {
            cout << "Rastas studentas: " << current->name << " (" << current->grade << ")" << endl;
            return;
        }
        current = current->next;
    }
    cout << "Studentas vardu " << name << " nerastas." << endl;
}

// 4 - Pašalinti studentą pagal vardą
bool removeStudent(Student*& head, string name)
{
    if (head == nullptr)
    {
        return false;
    }

    // Jei šalinamas pirmas studentas sąraše
    if (head->name == name)
    {
        Student* temp = head;
        head = head->next;
        delete temp;
        return true;
    }

    // Ieškome toliau sąraše
    Student* current = head;
    while (current->next != nullptr && current->next->name != name)
    {
        current = current->next;
    }

    // Jei radome
    if (current->next != nullptr)
    {
        Student* temp = current->next;
        current->next = current->next->next;
        delete temp;
        return true;
    }

    return false;
}

// 5 - Apskaičiuoti vidurkį
double calculateAverage(Student* head)
{
    if (head == nullptr)
    {
        return 0.0;
    }

    double sum = 0;
    int count = 0;
    Student* current = head;

    while (current != nullptr)
    {
        sum += current->grade;
        count++;
        current = current->next;
    }

    return sum / count;
}

// Atminties išvalymas prieš išjungiant programą
void clearList(Student*& head)
{
    while (head != nullptr)
    {
        Student* temp = head;
        head = head->next;
        delete temp;
    }
}

int main()
{
    Student* head = nullptr;
    int choice = 0;

    while (choice != 6)
    {
        cout << "\n--- MENIU ---" << endl;
        cout << "1 - Prideti studenta" << endl;
        cout << "2 - Parodyti visus studentus" << endl;
        cout << "3 - Surasti studenta" << endl;
        cout << "4 - Pasalinti studenta" << endl;
        cout << "5 - Apskaiciuoti vidurki" << endl;
        cout << "6 - Baigti" << endl;
        cout << "Pasirinkite: ";
        cin >> choice;

        if (choice == 1)
        {
            string name;
            double grade;
            cout << "Iveskite varda: ";
            cin >> name;
            cout << "Iveskite pazymi: ";
            cin >> grade;
            addStudent(head, name, grade);
            cout << "Studentas pridetas!" << endl;
        }
        else if (choice == 2)
        {
            printStudents(head);
        }
        else if (choice == 3)
        {
            string name;
            cout << "Iveskite ieskomo studento varda: ";
            cin >> name;
            findStudent(head, name);
        }
        else if (choice == 4)
        {
            string name;
            cout << "Iveskite salinamo studento varda: ";
            cin >> name;
            if (removeStudent(head, name))
            {
                cout << "Studentas pasalintas!" << endl;
            }
            else
            {
                cout << "Toks studentas nerastas." << endl;
            }
        }
        else if (choice == 5)
        {
            if (head == nullptr)
            {
                cout << "Sarasas tuscias, vidurkio apskaiciuoti negalima." << endl;
            }
            else
            {
                cout << "Studentu pazymiu vidurkis: " << calculateAverage(head) << endl;
            }
        }
        else if (choice == 6)
        {
            cout << "Programa baigia darba." << endl;
        }
        else
        {
            cout << "Neteisingas pasirinkimas!" << endl;
        }
    }

    // Atlaisviname atmintį prieš baigiant
    clearList(head);

    return 0;
}
