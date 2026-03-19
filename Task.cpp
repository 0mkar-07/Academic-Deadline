#include "Task.h"
#include<iostream>
using namespace std;


Task :: Task(int id,string detail){
    title=detail;
    unique_id=id;
}

Task :: ~Task(){
    cout<<"its a destructor";
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

bool Task :: isCompleted(){
    
    int n;
    cout<< "1->completed\n0->not completed\nenter : ";
    cin>>n;

    if(n==1){
        completed=true;
        return true;
    }
    else{
        completed=false;
        return false;
    }

}