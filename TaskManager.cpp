#include "TaskManager.h"
#include<iostream>
#include "FileStorage.h"

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

