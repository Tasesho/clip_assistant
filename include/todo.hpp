#ifndef TODO_HPP
#define TODO_HPP
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;


class ToDoManager{
    private: map<string, vector<pair<string,bool>>> lists;   //list name  -> (task,done(true, false))

    public: 
    
    void manageMenu();     // main menu
    void showLists();
    void createList();
    void addTask();
    void markTask();
    void deleteTask();
    
};


#endif