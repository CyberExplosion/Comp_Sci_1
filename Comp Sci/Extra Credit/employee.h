#ifndef EMPLOYEE_H
#define EMPLOYEE_H

// This "using namespace std" thing mess me up for a while. The Internet says it's bad practice but since the program is small i think it's fine
using namespace std;

class Employee {
private:
	string name;
	string idNumber;
	string department;
	string position;
	int yearsWorked;

	bool checkYears(int);

public:
	Employee(string, string, string, string, int);
	Employee(string, string);
	Employee();
	void setName(string);
	void setidNumber(string);
	void setDepartment(string);
	void setPosition(string);
	void setyearsWorked(int);
	
	//Accessors Functions
	string getName() {
		return name;
	}

	string getidNumber() {
		return idNumber;
	}

	string getDepartment() {
		return department;
	}

	string getPosition() {
		return position;
	}

	int getyearsWorked() {
		return yearsWorked;
	}
};

//Constructors:

//DESCRIPTION: Set all attributes to empty string
Employee::Employee() {
	name = "";
	idNumber = "";
	department = "";
	position = "";
	yearsWorked = 0;
}
/*******************
INPUT: all 5 attributes data type
DESCRIPTION: The constructor set every attributes of the object into the arguments.
********************/
Employee::Employee(string name_con, string id_con, string department_con, string pos_con, int year) {
	name = name_con;
	idNumber = id_con;
	department = department_con;
	position = pos_con;
	yearsWorked = year;
}
/********************
INPUT: first 2 attribute data type
DESCRIPTION: The constructor set the name attribute and the idNumber attribute of the object into arguments.
*********************/
Employee::Employee(string name_con, string id_con) {
	name = name_con;
	idNumber = id_con;
	department = "";
	position = "";
	yearsWorked = 0;
}

//Private Function
/*****************************
FUNCTION NAME: checkYears
INPUT: an integer as years worked
OUTPUT: boolean value
DESCRIPTION: The functions check if the input years is bigger than 0 or not. If it's bigger than 0, return true. If smaller than 0, return false
*****************************/
bool Employee::checkYears(int years) {
	if (years < 0) {
		return false;
	}
	return true;
}

//Mutator Function
void Employee::setName(string name_set) {
	name = name_set;
}
void Employee::setidNumber(string id_set) {
	idNumber = id_set;
}

void Employee::setDepartment(string set_department) {
	department = set_department;
}

void Employee::setPosition(string set_pos) {
	position = set_pos;
}

void Employee::setyearsWorked(int year) {
	if (checkYears(year)) {
		yearsWorked = year;
	}
	else {
		cout << "Attempt to set yearsWorked for " << name << " was invalid. It was set to " << yearsWorked << ".\n";
	}
}

#endif // !EMPLOYEE_H