#ifndef TASKMANAGER_H
#define TASKMANAGER_H
#include "assignment.h"
#include<vector>

class FileStorage;
class TaskManager{

    private:
        std::vector<Assignment> assignments;

    public:
        void addAssignment();
        void markCompleted(int id);
        void listAssignment();
        void deleteAssignment(int id,FileStorage &fs);
        friend class FileStorage;
};


#endif