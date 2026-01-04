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
