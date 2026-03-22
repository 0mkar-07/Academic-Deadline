#include "Task.h"
#include<iostream>
using namespace std;


Task :: Task(int id,string detail){
    title=detail;
    unique_id=id;
}

Task :: ~Task(){
    //cout<<"its a destructor\n";
}

void Task:: display(){
    cout<<endl<<"ID : "<<unique_id<<endl;
    cout<<"Title : "<<title<<endl;
    
    if(completed)
    cout<<"Status : completed "<<endl;
    else
    cout<<"Status : not completed"<<endl;

    cout<<endl<<endl;
}

void Task :: markCompleted(){
    completed=true;
}

int Task :: show_id(){
    return unique_id;
}

string Task ::show_title(){
    return title;
}

bool Task :: show_completed(){
    return completed;
}