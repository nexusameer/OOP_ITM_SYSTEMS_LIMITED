#ifndef TODOLIST_H
#define TODOLIST_H

#include <iostream>
#include <string>
#include "Owner.h"

class ToDoList {
private:
    Owner owner;
    std::string* item_list;
    int capacity;
    int number_of_tasks;

public:
    // Parameterized Constructor
    ToDoList(const std::string& first, const std::string& last, int size = 10)
        : owner(first, last), capacity(size), number_of_tasks(0) {
        item_list = new std::string[capacity];
    }

    // Copy Constructor
    ToDoList(const ToDoList& other)
        : owner(other.owner), capacity(other.capacity), number_of_tasks(other.number_of_tasks) {
        item_list = new std::string[capacity];
        for (int i = 0; i < number_of_tasks; ++i) {
            item_list[i] = other.item_list[i];
        }
    }

    // Add an item
    void addItem(const std::string& task) {
        if (number_of_tasks >= capacity) {
            std::cout << "List is full" << std::endl;
        }
        else {
            item_list[number_of_tasks++] = task;
        }
    }

    // Print tasks
    void print() const {
        std::cout << owner.getFullName() << "'s To-Do List:" << std::endl;
        for (int i = 0; i < number_of_tasks; ++i) {
            std::cout << i + 1 << ". " << item_list[i] << std::endl;
        }
    }

    // Destructor
    ~ToDoList() {
        delete[] item_list;
    }
};

#endif
