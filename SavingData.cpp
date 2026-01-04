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
