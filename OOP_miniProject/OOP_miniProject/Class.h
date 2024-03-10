#ifndef CLASS_H
#define CLASS_H

#include <string>
#include <iostream>
#include "Student.h"

const int MAX_CLASSES = 10;
const int MAX_STUDENT = 10;
const int MAX_NOTE = 10;

class MyClass{
private:
    int class_id;
    std::string class_name;
    std::string teacher_name;
    std::string student_name;
    std::string student_surname;
    int student_id;

public:
    int numStudent = 0, numClasses = 0, numNote = 0;
    MyClass* classesArray[MAX_CLASSES];
    Student* StudentArry[MAX_STUDENT];
    int Note[MAX_NOTE];
    bool haveNote = false, haveStudent = false;;

    MyClass(int ClassId, std::string className, std::string teacherName) : class_id(ClassId),
        class_name(className), teacher_name(teacherName) {}

    void setClassId(int id){
        class_id = id;
    }

    void setClassName(std::string cname){
        class_name = cname;
    }

    void setTeacherName(std::string tname){
        teacher_name = tname;
    }

    int getClassId(){
        return class_id;
    }

    std::string getClassName(){
        return class_name;
    }

    std::string getTeacherName(){
        return teacher_name;
    }

    void createClass() {
        if (numClasses < MAX_CLASSES) {
            int classId;
            std::string className, teacherName;

            std::cout << "Enter Class id: ";
            std::cin >> classId;
            std::cout << "Enter Class Name: ";
            std::cin >> className;
            std::cout << "Enter Teacher Name: ";
            std::cin >> teacherName;

            classesArray[numClasses] = new MyClass(classId, className, teacherName);
            numClasses++;

            std::cout << "Class created.\n" << std::endl;
        } else {
            std::cout << "Maximum number of classes reached" << std::endl;
        }
    }

    bool haveClass = false;

    std::string getClasses() {
        std::string classList;

        for (int i = 0; i < numClasses; i++) {
            if (classesArray[i] != nullptr) {
                haveClass = true;
                classList += std::to_string(i+1) + ". Class ID: " + std::to_string(classesArray[i]->getClassId()) + ", Class Name: " + classesArray[i]->getClassName()
                    + ", Teacher Name: " + classesArray[i]->getTeacherName() + "\n\n";
            }
        }

        if (!haveClass) {
            classList += "No classes have been created.\n\n";
        }

        return classList;
    }

    void registerClass(int student_id, int class_id){
        std::string FoundClass;

        for (int i = 0; i < numClasses; i++) {
            if (classesArray[i]->getClassId() == class_id) {
                std::cout << "Enter Student Name: ";
                std::cin >> student_name;
                std::cout << "Enter Student Surname: ";
                std::cin >> student_surname;
                StudentArry[numStudent] = new Student(student_name, student_surname, student_id);
                numStudent++;
                std::cout << "You are registered in the class.\n" << std::endl;
            } else {
                std::cout << "Class id not found! \n\n";
            }
        }
    }

    std::string getStudents() {
        std::string studentlist;

        for (int j = 0; j < numStudent; j++) {
            studentlist += std::to_string(j+1) + ". Student ID: " + std::to_string(StudentArry[j]->getid()) + ", Student Name: " + StudentArry[j]->getName()
                + ", Student Surname: " + StudentArry[j]->getLastName() + "\n";
            haveStudent = true;
        }

        if (!haveStudent) {
            studentlist += "No students have registered.\n\n";
        }

        return studentlist;
    }

    void setGrade(int mark){
        for(int i; i < 10; i++){
            Note[i]= mark;
            cout <<  "The grade was given successfully.\n\n";
        }
    }

    std::string getGrade(){
        std::string notes;

        for (int j = 0; j < numStudent; j++) {
            notes += std::to_string(j+1) + ". Student ID: " + std::to_string(StudentArry[j]->getid()) + ", Student Name: " + StudentArry[j]->getName()
                + ", Student Surname: " + StudentArry[j]->getLastName() + ", Mark: " + std::to_string(Note[j]) +"\n";
            haveNote = true;
        }

        if (!haveNote) {
            notes += "No students have registered.\n\n";
        }

        return notes;
    }
};

#endif // CLASS_H
