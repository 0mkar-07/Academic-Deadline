#include<bits/stdc++.h>
#include "FileStorage.h"
#include"TaskManager.h"
#include "CLI/CLI.hpp"
#include "icommand.hpp"
#include"add_command.hpp"

int main(int argc,char** argv){

    TaskManager manager;
    FileStorage fs;

    fs.loadAssignment(manager);

    CLI::App app{"Task manager CLI "};

    AddCommand add(manager);
    add.setup(app);

    CLI11_PARSE(app,argc,argv);


    manager.listAssignment();
    
}