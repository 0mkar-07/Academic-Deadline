#include "FileStorage.h"
#include<iostream>
#include<fstream>
namespace fs = std::filesystem;
using namespace std;

FileStorage :: FileStorage(){

    if(fs::exists("data.txt")){

    }
    else{
        ofstream crte("data.txt");
        crte<<"|ID|Subject|Title|Deadline|Completed|";
        crte.close();
    }

}

void FileStorage::saveAssignment(TaskManager &manager_list){
    ofstream record("data.txt");
    for(int i=0;i<manager_list.assignments.size();i++){
        
        record<<to_string(manager_list.assignments[i].show_id());
        record<<"|"<<manager_list.assignments[i].show_title();
        record<<"|"<<manager_list.assignments[i].show_subject();
        record<<"|"<<manager_list.assignments[i].show_deadline();
        record<<"|"<<to_string(manager_list.assignments[i].show_completed())<<endl;
    }
    record.close();
}

void FileStorage::  loadAssignment(){


}