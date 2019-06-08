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
	string getName();
	string getidNumber();
	string getDepartment();
	string getPosition();
	int getyearsWorked();
};

/*Implementation*/

//Constructors:
Employee::Employee() {
	name = "";
	idNumber = "";
	department = "";
	position = "";
	yearsWorked = 0;
}

Employee::Employee(string name_con, string id_con, string department_con, string pos_con, int year) {
	name = name_con;
	idNumber = id_con;
	department = department_con;
	position = pos_con;
	yearsWorked = year;
}
Employee::Employee(string name_con, string id_con) {
	name = name_con;
	idNumber = id_con;
	department = "";
	position = "";
	yearsWorked = 0;
}

//Private Function
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

//Accessors Functions
string Employee::getName() {
	return name;
}

string Employee::getidNumber() {
	return idNumber;
}

string Employee::getDepartment() {
	return department;
}

string Employee::getPosition() {
	return position;
}

int Employee::getyearsWorked() {
	return yearsWorked;
}

#endif // !EMPLOYEE_H