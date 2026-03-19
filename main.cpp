#include<iostream>
using namespace std;
#include "Task.h"

int main(){
    int id;
    string s;

    cout<<"enter ID : ";
    cin>>id;
    cin.ignore(); // ignore \n created by above cin. so getline can take input
    cout<<"enter title : ";
    getline(cin,s);

    Task t1(id,s);
    t1.display();
    t1.isCompleted();
    t1.display();




}