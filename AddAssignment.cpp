void addAssignment()
{
    if (countAssignments >= MAX)
    {
        cout << "Assignment list is full!\n";
        return;
    }

    cout << "Enter assignment title: ";
    cin >> title[countAssignments];

    cout << "Enter deadline (DD/MM/YYYY): ";
    cin >> deadline[countAssignments];

    status[countAssignments] = "Pending";
    countAssignments++;

    cout << "Assignment added successfully!\n";
}
