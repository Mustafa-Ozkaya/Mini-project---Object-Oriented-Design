// Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
using namespace std;
#include "Users.h"

class Student : public Person {
public:
    Student(std::string name, std::string lastname, int id) : Person(name, lastname, id) {}
};

#endif // STUDENT_H
