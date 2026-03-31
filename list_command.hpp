#pragma once
#include "CLI/CLI.hpp"
#include "icommand.hpp"
#include "TaskManager.h"


class ListCommand : public ICommand{

    private:
    TaskManager *tm;

    void execute(){
        std::cout<<"----------------------------------------------------------------\n";
        tm->listAssignment();
        std::cout<<"----------------------------------------------------------------\n";
    }

    public:
    ListCommand(TaskManager &tm){
        this->tm=&tm;

    }

    void setup(CLI::App &app) override{

        auto list=app.add_subcommand("list","Displays all assignments ");

        list->callback([this]() { execute(); });
    }


};


