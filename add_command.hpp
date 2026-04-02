#pragma once
#include "icommand.hpp"
#include "TaskManager.h"
#include "CLI/CLI.hpp"
#include<string>


class AddCommand : public ICommand {
    private:
    TaskManager *tm;
    
    std :: string title,date,sub;
    void execute() {
        // Call TaskManager.addAssignment(...)
    
        tm->addAssignment(title,sub,date);
    }
    public:
    // Constructor should take TaskManager reference

    AddCommand(TaskManager &tm){
        this->tm=&tm;
        
    };
    
    void setup(CLI::App &app) override {
        // Create subcommand: "add"    
        // Add positional argument for title
        // Add --subject option
        // Add --deadline option
        // Set callback to call execute()
        
        auto add=app.add_subcommand("add","adds assignment "); 

        add->add_option("title",title,"title")->required();
        add->add_option("--subject",sub,"subject")->required();
        add->add_option("--deadline",date,"deadline")->required();
        
        
       add->callback([this]() { execute(); });
    }  
};