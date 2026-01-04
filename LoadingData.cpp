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
