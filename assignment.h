#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H
#include "Task.h"
#include<string>

class Assignment : public Task{

    private:
        std::string subject;
        std::string deadline; 

    public:
        Assignment(int id,std::string detail,std :: string sub,std :: string date ) : Task(id,detail),subject(sub),deadline(date){};
        void display() override;
        std :: string show_subject();
        std::string show_deadline();


};

#endif