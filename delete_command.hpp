#include "CLI/CLI.hpp"
#include "TaskManager.h"
#include "icommand.hpp"

class DeleteCommand:ICommand{

private:
    TaskManager *tm;
    int id;

    void execute(){

        tm->deleteAssignment(id);

    }
public:
    DeleteCommand(TaskManager &tm_ref){
        tm=&tm_ref;
    }

    void setup(CLI::App &app){

        auto deletex=app.add_subcommand("delete","Delete assignment for given ID");

        deletex->add_option("delete",id,"Enter id")->required();

        deletex->callback([this](){execute();});
    }

};

