#include "FileStorage.h"
#include "TaskManager.h"
#include<iostream>
#include<fstream>
namespace fs = std::filesystem;
using namespace std;

FileStorage :: FileStorage(){

    if (! fs :: exists("data_file")){
        fs::create_directory(data_folder);
    }

}

void FileStorage::saveAssignment(TaskManager &manager){
    ofstream record(data_file);
    for(int i=0;i<manager.assignments.size();i++){
        
        record<<to_string(manager.assignments[i].show_id());
        record<<"|"<<manager.assignments[i].show_title();
        record<<"|"<<manager.assignments[i].show_subject();
        record<<"|"<<manager.assignments[i].show_deadline();
        record<<"|"<<to_string(manager.assignments[i].show_completed())<<endl;
    }
    record.close();
}

void FileStorage::  loadAssignment(TaskManager& manager){

    ifstream file (data_file);
    string line;
    
    while(getline(file,line)){
        string id,title,sub,date,completed;
        stringstream line_split(line);
        
        getline(line_split, id, '|');
        getline(line_split, title, '|');
        getline(line_split, sub, '|');
        getline(line_split, date, '|');
        getline(line_split, completed, '|');
        
        Assignment a(stoi(id),title,sub,date);

        if(stoi(completed)==1)
        a.markCompleted();

        manager.assignments.push_back(a);
    
    }

    file.close();
}