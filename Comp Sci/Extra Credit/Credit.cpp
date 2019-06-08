//Khoi Nguyen
//CS1, section #0109
//Assignment "Extra Credit"
//Summary
#include <iostream>
#include <string>
#include "employee.h"
using namespace std;

//Implementation - Constructor Object
Employee::Employee(string name_con, string id_con, string deparment_con, string pos_con, int years_con) {
	name = name_con;
	idNumber = id_con;
	department = deparment_con;
	position = pos_con;
	yearsWorked = years_con;
}
Employee::Employee(string name_con, string id_con, string department_con, string position_con, int years_con) {
	name = name_con;
	idNumber = id_con;
	department = department_con;
}

void Employee::setName(string name) {
	
}

int main() {
	

	return 0;
}