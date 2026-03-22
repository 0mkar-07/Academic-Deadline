#include "TaskManager.h"
#include<iostream>


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
        assignments[i].display();
        cout<<endl;
    }


}

