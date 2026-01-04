#include <iostream>
#include <fstream>
using namespace std;


void loadData();
void saveData();
void addAssignment();
void viewAssignments();
void markCompleted();

const int MAX = 100;

string title[MAX];
string deadline[MAX];
string status[MAX];

int countAssignments = 0;

int main()
{
    int choice;

    loadData();  

    do
    {
        cout << "\n===== ASSIGNMENT & DEADLINE MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Assignment\n";
        cout << "2. View Assignments\n";
        cout << "3. Mark Assignment as Completed\n";
        cout << "4. Save & Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
            addAssignment();
        else if (choice == 2)
            viewAssignments();
        else if (choice == 3)
            markCompleted();
        else if (choice == 4)
        {
            saveData();
            cout << "Data saved. Exiting program...\n";
        }
        else
            cout << "Invalid choice! Try again.\n";

    } while (choice != 4);

    return 0;
}

void loadData()
{
    ifstream file("assignments.txt");

    if (!file)
        return;

    while (file >> title[countAssignments]
                >> deadline[countAssignments]
                >> status[countAssignments])
    {
        countAssignments++;
    }

    file.close();
}


void saveData()
{
    ofstream file("assignments.txt");

    for (int i = 0; i < countAssignments; i++)
    {
        file << title[i] << " "
             << deadline[i] << " "
             << status[i] << endl;
    }

    file.close();
}

void addAssignment()
{
    if (countAssignments >= MAX)
    {
        cout << "Assignment list is full!\n";
        return;
    }

    cout << "Enter assignment title (no spaces): ";
    cin >> title[countAssignments];

    cout << "Enter deadline (DD/MM/YYYY): ";
    cin >> deadline[countAssignments];

    status[countAssignments] = "Pending";

    countAssignments++;

    cout << "Assignment added successfully!\n";
}


void viewAssignments()
{
    if (countAssignments == 0)
    {
        cout << "No assignments available.\n";
        return;
    }

    cout << "\n--- ASSIGNMENTS LIST ---\n";
    for (int i = 0; i < countAssignments; i++)
    {
        cout << i + 1 << ". "
             << "Title: " << title[i]
             << " | Deadline: " << deadline[i]
             << " | Status: " << status[i] << endl;
    }
}

void markCompleted()
{
    int num;

    viewAssignments();

    if (countAssignments == 0)
        return;

    cout << "Enter assignment number to mark completed: ";
    cin >> num;

    if (num < 1 || num > countAssignments)
    {
        cout << "Invalid number!\n";
        return;
    }

    status[num - 1] = "Completed";
    cout << "Assignment marked as completed!\n";
}