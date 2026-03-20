#include<iostream>
#include "assignment.h"
using namespace std;

void Assignment :: display(){
    cout<<endl<<"ID : "<<unique_id<<endl;
    cout<<"Title : "<<title<<endl;
    
    if(completed)
    cout<<"Status : completed "<<endl;
    else
    cout<<"Status : not completed"<<endl;

    cout<<"subject : "<<subject<<endl;
    cout<<"deadline : "<<deadline<<endl;
}