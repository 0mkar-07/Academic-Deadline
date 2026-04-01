#pragma once
#include "icommand.hpp"
#include "TaskManager.h"
#include "CLI/CLI.hpp"
#include<string>

class CompleteCommand : public ICommand{

    private:
        int id;
        TaskManager *tm;

        void execute(){
            tm->markCompleted(id);

        }
    public:

        CompleteCommand(TaskManager &tm_ref){
            tm=&tm_ref;
        }

        void setup(CLI::App &app) override{

            auto complete=app.add_subcommand("complete","marks complete for given ID");

            complete->add_option("id",id,"positional argument <id>")->required();

            complete->callback([this]() { execute(); });


        }


};