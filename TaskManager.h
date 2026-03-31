#ifndef TASKMANAGER_H
#define TASKMANAGER_H
#include "assignment.h"
#include<string>
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
        void addAssignment(std::string title,std::string sub,std::string date);
};


#endif