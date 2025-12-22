#include <iostream>
#include <fstream>
#include <string>

using namespace std;

 void addAssignment()
 {
    ofstream file("assignments.txt", ios::app);
    string name, deadline;

    cin.ignore();
    cout << "Enter Assignment Name: ";
    getline(cin, name);

    cout << "Enter Deadline: ";
    getline(cin, deadline);

    file << name << " | " << deadline << " | Pending" << endl;
    file.close();

    cout << "Assignment Added!\n";
}

 void viewAssignments() {
    ifstream file("assignments.txt");
    string line;

    cout << "\n--- Assignments ---\n";
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

