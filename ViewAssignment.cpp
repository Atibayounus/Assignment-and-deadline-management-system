void viewAssignments()
{
    if (countAssignments == 0)
    {
        cout << "No assignments available.\n";
        return;
    }

    cout << "\n ASSIGNMENTS LIST \n";
    for (int i = 0; i < countAssignments; i++)
    {
        cout << i + 1 << ". "
             << "Title: " << title[i]
             << " | Deadline: " << deadline[i]
             << " | Status: " << status[i] << endl;
    }
}
