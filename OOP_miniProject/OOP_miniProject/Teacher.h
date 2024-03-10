	#ifndef TEACHER_H
	#define TEACHER_H

	#include<iostream>
	using namespace std;
	#include "Users.h"
	#include "Student.h"

	class Teacher: public Person{
	private:
		int teacherMark[6];
		Student student;
	public:
		Teacher(std::string name, std::string lastname, int id) : Person(name, lastname, id),student("isim", "soyisim", 123) {};
		void setMark(int Index,double m){
			if(Index >= 0 && Index<6){
				teacherMark[Index]=m;
			}
		}int getMark(int Index){
			if(Index >= 0 && Index<6){
				return teacherMark[Index];
			}    
		}
	};
	#endif // TEACHER_H