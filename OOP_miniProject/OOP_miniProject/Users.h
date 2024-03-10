#ifndef BASECLASS_H
#define BASECLASS_H

class Person{
	private:
	std::string name;
	std::string lastname;
	int id;
	public:
	Person(string name,string lastname,int id){
	this->name=name;
	this->lastname=lastname;
	this->id=id;
	}
	void setName(string n){
		name=n;
	}string getName(){
		return name;
	}
	void setLastName(string ls){
		lastname=ls;
	}string getLastName(){
		return lastname;
	}
	void setid(int number){
		id=number;
	}int getid(){
		return id;
	}
};
#endif // BASECLASS_H