#ifndef TASK_H
#define TASK_H

#include<string>

class Task{

    protected:
        int unique_id;
        std::string title;
        bool completed=false;

    public:
        Task(int id,std :: string detail);
        virtual ~Task();
        virtual void display();
        void markCompleted();
        int show_id();
        std :: string show_title();
        bool show_completed();
};

#endif