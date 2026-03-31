#ifndef FILESTORAGE_H
#define FILESTORAGE_H
#include<filesystem>
#include<fstream>
#include<sstream>
class TaskManager;
class FileStorage{
    private:
        std :: filesystem :: path data_folder="data_file";
        std :: filesystem ::path data_file="data_file/data.txt";

    public:
        FileStorage();
        void saveAssignment(TaskManager& manager);
        void loadAssignment(TaskManager& manager);
};
#endif