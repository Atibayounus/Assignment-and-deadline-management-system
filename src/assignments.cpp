#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H

#include <string>
using namespace std;

const int MAX = 100;

extern string title[MAX];
extern string deadline[MAX];
extern string status[MAX];
extern int countAssignments;

void loadData();
void saveData();
void addAssignment();
void viewAssignments();
void markCompleted();

#endif
