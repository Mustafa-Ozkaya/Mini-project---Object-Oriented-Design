#include<iostream>

#include "Teacher.h"
#include "Student.h"
#include "Class.h"
void createClass();

using namespace std;

int main() {
	int notes[6];
	int classId;
	int studentId,classid1;
	int option1,optionTeacher,optionStudent,id;
	Teacher teacher("","",0);
	MyClass class1(0,"","");
	Student student1("","",0);
	
	while (true)
	{
	cout<<"Main Menu"<<endl;
	cout<<"Select Options"<<endl;
	cout<<"-----------------------"<<endl;
	cout<<"1-)Teacher\n2-)Student"<<endl;
	cout<<"-----------------------"<<endl;
	cout<<"(Press 3 to Exit)"<<endl;
	cout<<"Enter Your Option: "; cin>>option1;

	if(option1 == 1){
		cout << "Welcome Teacher" << endl;
		cout << "\nSelect Options" << endl;
		cout << "1-)Create Class";
		cout << "\n2-)See All Class";
		cout << "\n3-)Mark Grade Student";
		cout << "\n4-)See All Student's Mark" << endl;
		cout<<"Enter Your Option: "; cin>>optionTeacher;
		if (optionTeacher== 1){	
			class1.createClass();
		}
		else if (optionTeacher== 2){	
			cout << class1.getClasses();
		}
		else if (optionTeacher == 3) {
    	int speclassid, specstudid, specmark;
    	cout << class1.getClasses();
    	cout << "\nEnter Class ID: ";
    	cin >> speclassid;
		cout << "Your Students:\n";
    	cout << class1.getStudents();
    	cout << "Enter Student ID: ";
    	cin >> specstudid;
    	cout << "Enter Student Mark: ";
    	cin >> specmark;
		class1.setGrade(specmark);
    	continue;
}

		else if (optionTeacher== 4){	
			cout << "Notes are:\n ";
			cout << class1.getGrade();
		}
		
	} else if (option1 == 2){
		cout << "Welcome Student" << endl;
		cout << "Select Options"<< endl;
		cout << "\n1-)Register Classes";
		cout << "\n2-)See Your Mark";
		cout<<"\nEnter Your Option: "; cin>>optionStudent;

		if(optionStudent == 1){
			cout << class1.getClasses();
			if(class1.haveClass)
			{std::cout << "Enter Class id: ";
            std::cin >> classId;
			std::cout << "Enter Student id: ";
            std::cin >> studentId;
			class1.registerClass(studentId,classId);}
			else if(!class1.haveClass){
				continue;
			}
		} else if(optionStudent == 2){
			cout << class1.getGrade();
		}
	}
	if (option1 == 3) {
		break;
	} else if (option1 > 3)
	{
		printf("Wrong option!!");
	}} 

    return 0;
}