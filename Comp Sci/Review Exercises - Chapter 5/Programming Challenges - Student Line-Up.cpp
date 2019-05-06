#include <iostream>
#include <string>
using namespace std;

int main_done15() {
	string name_input,
		first_name="",
		last_name="";
	int num_students;

	cout << "Enter a number between 1 - 20 for the number of students in the class: ";
	cin >> num_students;

	for (int i = 0; i < num_students; i++) {
		cout << "Enter the name of student number " << i+1 << ": ";
		cin >> name_input;
		if (name_input < first_name || first_name == "") {
			first_name = name_input;
		}
		if (name_input > last_name) {
			last_name = name_input;
		}
	}

	cout << "The student in front would be: " << first_name << endl;
	cout << "The student in the end would be: " << last_name << endl;

	return 0;
}