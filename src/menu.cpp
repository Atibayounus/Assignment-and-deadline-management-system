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
