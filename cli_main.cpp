#include<bits/stdc++.h>
#include "FileStorage.h"
#include"TaskManager.h"
#include "CLI/CLI.hpp"
#include "icommand.hpp"
#include"add_command.hpp"
#include "list_command.hpp"
#include "complete_command.hpp"
#include "delete_command.hpp"


int main(int argc,char** argv){

    TaskManager manager;
    FileStorage fs;

    fs.loadAssignment(manager);

    CLI::App app{"Task manager CLI "};
    app.require_subcommand(1,1);

    AddCommand add(manager);
    add.setup(app);
    ListCommand list(manager);
    list.setup(app);
    CompleteCommand complete(manager);
    complete.setup(app);
    DeleteCommand deletex(manager);
    deletex.setup(app);

    CLI11_PARSE(app,argc,argv);


    

}