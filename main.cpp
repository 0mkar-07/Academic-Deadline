#include<iostream>
using namespace std;
#include "Task.h"
#include "assignment.h"

int main(){
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
    a.display();

}