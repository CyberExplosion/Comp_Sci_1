//#pragma once
#include <iomanip>
#include <string>

class Employee {
private:
	string name;		//employee's first and last name
	string idNumber;		//string variable that holds an employee's id number
	string department;	//name of employee's department
	string position;	//name of the employee's job title
	int yearsWorked;	//holds number of years the employee has worked at the company

public:
	//Constructor
	Employee();
	Employee(string = "Nelson", string = "123456", string = "CEO", string = "Master Chef", int = 2000);
	Employee(string = "Khoi", string = "789101", string = "", string = "", int = 0);

	//Function Prototype - Definition
	//Mutators
	void setName(string name_cls) {
		name = name_cls;
	}
	void setIdNum(string id_cls) {
		idNumber = id_cls;
	}
	void setDepartment(string department_cls) {
		department = department_cls;
	}
	void setPosition(string pos_cls) {
		position = pos_cls;
	}
	void setyearsWorked(int year_cls) {
		yearsWorked = year_cls;
	}
	//Accessors
	string getName() {
		return name;
	}
	string getIdNum() {
		return idNumber;
	}
	string getDepartment() {
		return deparment;
	}
	string getPosition() {
		return position;
	}
	int getYearsWorked() {
		return yearsWorked;
	}
};
