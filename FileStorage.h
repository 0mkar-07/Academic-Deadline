#ifndef FILESTORAGE_H
#define FILESTORAGE_H
#include "TaskManager.h"
#include<filesystem>
#include<fstream>
class FileStorage{
    private:
        std :: string data_folder="/home/omkar/git_folder/academic_deadlines";
        std :: string data_file="/home/omkar/git_folder/academic_deadlines/data,txt";

    public:
        FileStorage();
        void saveAssignment(TaskManager &manager_list);
        void loadAssignment();
};

#endif