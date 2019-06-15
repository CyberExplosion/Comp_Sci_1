#include <iostream>
#include <string>
#include <iomanip>
#include "employee.h"

using namespace std;

int main() {
	// Create 3 different objects that use 3 different constructors
	Employee employee_1("Jenny Jacobs", "JJ8990", "Accounting", "President", -1),
		employee_2("Myron Smith", "MS7571"),
		employee_3;

	// Set value for object employee 2
	employee_2.setDepartment("IT");
	employee_2.setPosition("Programmer");
	employee_2.setyearsWorked(-1);
	
	//Set value for object employee 3
	employee_3.setName("Chris Raines");
	employee_3.setidNumber("CR6873");
	employee_3.setDepartment("Manufacturing");
	employee_3.setPosition("Engineer");
	employee_3.setyearsWorked(-1);

	cout << endl;
	cout << "Name" << setw(20) << "ID Number" << setw(20) << "Department" << setw(20) << "Position" << setw(20) << "Years Worked" << endl;
	cout << "----" << setw(20) << "---------" << setw(20) << "----------" << setw(20) << "--------" << setw(20) << "------------" << endl;
	cout << left;
	cout << setw(15) << employee_1.getName() << setw(19) << employee_1.getidNumber() << setw(22) << employee_1.getDepartment() << setw(17) << employee_1.getPosition() << employee_1.getyearsWorked() << endl;
	cout << setw(15) << employee_2.getName() << setw(19) << employee_2.getidNumber() << setw(22) << employee_2.getDepartment() << setw(17) << employee_2.getPosition() << employee_2.getyearsWorked() << endl;
	cout << setw(15) << employee_3.getName() << setw(19) << employee_3.getidNumber() << setw(22) << employee_3.getDepartment() << setw(17) << employee_3.getPosition() << employee_3.getyearsWorked() << endl;

	return 0;
}