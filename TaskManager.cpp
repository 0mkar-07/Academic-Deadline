#include "TaskManager.h"
#include<iostream>
#include "FileStorage.h"
#include<string>

using namespace std;

void TaskManager :: addAssignment(){

    int id;
    string t,sub,d;

    cout<<"enter ID : ";
    cin>>id;
    cin.ignore(); // ignore \n created by above cin. so getline can take input
    cout<<"enter title : ";
    getline(cin,t);
    cout<<"enter subject : ";
    getline(cin,sub);
    cout<<"enter date : ";
    getline(cin,d);

    Assignment a(id,t,sub,d);

    assignments.push_back(a);

}

void TaskManager :: markCompleted(int id){

    for(int i=0 ;i<assignments.size();i++){

        if(assignments[i].show_id()==id){
            assignments[i].markCompleted();
            assignments[i].display();
            cout<<endl;
            return;
        }

        
    }
    cout<<id<<" dosent exist"<<endl;

}

void TaskManager :: listAssignment(){

    for(int i=0;i<assignments.size();i++){
        assignments[i].display2();
        cout<<endl;
    }


}

void TaskManager :: deleteAssignment(int id,FileStorage &fs){


    bool found=false;

    for(int i=0;i<assignments.size();i++){

        if(assignments[i].show_id()==id){
            assignments.erase(assignments.begin()+i);
            cout<<"task "<<id<<" has been deleted \n";
            found=true;
            break;
        }

        
    }
    if(!found)
    cout<<"task "<<id<<" dosent exist \n";

    fs.saveAssignment(*this);
}

void TaskManager :: addAssignment(string title,string sub,string date){
    int id;

    //creating temp helping object fs , the main data is in data.txt not in vector
    // if we want data we can get it from fs.loadAffignment();
    FileStorage fs;
    if(assignments.size()==0){
        id=1;
    }
    else{
        id=assignments.back().show_id()+1;
    }

    Assignment a(id,title,sub,date);
    assignments.push_back(a);
    fs.saveAssignment(*this);

}
