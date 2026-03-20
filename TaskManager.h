#ifndef TASKMANAGER_H
#define TASKMANAGER_H
#include "assignment.h"
#include<vector>
class TaskManager{

    private:
        std::vector<Assignment> assignments;

    public:
        void addAssignment();
        void markCompleted(int id);
        void listAssignmrnt();
        friend class FileStorage;
};

#endif