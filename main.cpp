#include<iostream>
using namespace std;
#include "TaskManager.h"
#include"FileStorage.h"

int main(){

    TaskManager tm;
    FileStorage fs;
    fs.loadAssignment(tm);

    while(1){

        cout<<"1 : add asignment\n"
            <<"2 : list assignment\n"
            <<"3 : mark complete\n"
            <<"4 : exit()\n"
            <<"enter : ";

        int input;
        cin>>input;

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

            case 4 :
                cout<<"thank you\n";
            break;

            default:
                cout<<"invalid input\n";
            break;
        }
        
        
        cout<<"_____________________________________________________________________\n\n";
        
        if(input==4)
        break;
    }
    fs.saveAssignment(tm);

return 0;

}