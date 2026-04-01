#include<iostream>
#include<iomanip>
#include "assignment.h"
using namespace std;

void Assignment :: display(){

    /*
    cout<<endl<<"ID : "<<unique_id<<endl;
    cout<<"Title : "<<title<<endl;
    
    if(completed)
    cout<<"Status : completed "<<endl;
    else
    cout<<"Status : not completed"<<endl;
    */

    Task :: display();

    cout<<"subject : "<<subject<<endl;
    cout<<"deadline : "<<deadline<<endl;
}

string Assignment :: show_subject(){
    return subject;
}
string Assignment :: show_deadline(){
    return deadline;
}

void Assignment :: display2(){
    cout << left
     << setw(5)  << show_id()
     << setw(25) << show_title()
     << setw(20) << show_subject()
     << setw(12) << show_deadline()
     << setw(3) << show_completed()
     << endl;
}