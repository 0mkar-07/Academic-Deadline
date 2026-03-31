#include<iostream>
using namespace std;
#include "TaskManager.h"
#include"FileStorage.h"

int main(){

    TaskManager tm;
    FileStorage fs;
    fs.loadAssignment(tm);

    while(1){
        cout<<"-----------------------------------------------------------------------------\n";
        cout<<"1 : add asignment\n"
            <<"2 : list assignment\n"
            <<"3 : mark complete\n"
            <<"4 : delete assignment\n"
            <<"5 : exit()\n"
            <<"enter : ";
            int input;
            cin>>input;
            cout<<"-------------------------------------------------------------------------\n";


        switch(input){
            case 1:
                tm.addAssignment();
            break;

            case 2 :
                tm.listAssignment();
            break;

            case 3 :
                cout<<"enter id : ";
                int id;
                cin>>id;
                tm.markCompleted(id);
            break;

            case 5 :
                cout<<"thank you\n";
            break;

            case 4 :
                cout<<"enter id : ";
                int idx;
                cin>>idx;
                tm.deleteAssignment(idx,fs);
            break;

            default:
                cout<<"invalid input\n";
            break;
        }
        
        
        cout<<"_____________________________________________________________________________\n\n";
        
        if(input==5)
        break;
    }
    fs.saveAssignment(tm);

return 0;

}