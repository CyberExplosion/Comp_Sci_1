#include <iostream>
#include <string>
using namespace std;

int main_done13c() {
	string runner1,
		runner2,
		runner3,
		first,
		second,
		third;

	int runner_1_time,
		runner_2_time,
		runner_3_time, 
		first_time,
		second_time,
		third_time;

	cout << "Enter the 3 runner name: ";
	getline(cin,runner1);
	getline(cin, runner2);
	getline(cin, runner3);
	
	cout << "Enter the time of runner in order: ";
	cin >> runner_1_time >> runner_2_time >> runner_3_time;

	if(runner_1_time<0||runner_2_time<0||runner_3_time<0){
		cout << "Time cannot be a negative number.\n";
	} 
	else {
		if (runner_1_time < runner_2_time) {
			first_time = runner_1_time;
			second_time = runner_2_time;
			third_time = runner_3_time;
			if (runner_3_time < second_time) {
				second_time = runner_3_time;
				third_time = runner_2_time;
			}
			
			if (runner_3_time < first_time) {
				first_time = runner_3_time;
				second_time = runner_1_time;
				third_time = runner_2_time;
			}

		}
		else {
			first_time = runner_2_time;
			second_time = runner_1_time;
			third_time = runner_3_time;
			if (runner_3_time < second_time) {
				second_time = runner_3_time;
				third_time = runner_1_time;
			}
			if (runner_3_time < first_time) {
				first_time = runner_3_time;
				second_time = runner_2_time;
				third_time = runner_1_time;
			}
		} 
	
	/*
-------	Can be much simpler---------------- 
	else {
		if (runner_1_time < first_time&&runner_1_time < second_time&&runner_1_time < third_time) {
			first_time = runner_1_time;
			first = runner1;
			if (runner_2_time < second_time&&runner_2_time < third_time) {
				second_time = runner_2_time;
				second = runner2;
				third_time = runner_3_time;
				third = runner3;
			}
			if (runner_3_time < second_time&&runner_3_time < third_time) {
				second_time = runner_3_time;
				second = runner3;
				third_time = runner_2_time;
				third = runner2;
			}
		}
		if (runner_2_time < first_time&&runner_2_time < second_time&&runner_2_time < third_time) {
			first_time = runner_2_time;
			first = runner2;
			if (runner_1_time < second_time&&runner_1_time < third_time) {
				second_time = runner_1_time;
				second = runner1;
				third_time = runner_3_time;
				third = runner3;
			}
			if (runner_3_time < second_time&&runner_3_time < third_time) {
				second_time = runner_3_time;
				second = runner3;
				third_time = runner_1_time;
				third = runner1;
			}
		}
		if (runner_3_time < first_time&&runner_3_time < second_time&&runner_3_time < third_time) {
			first_time = runner_3_time;
			first = runner3;
			if (runner_1_time < second_time&&runner_1_time < third_time) {
				second_time = runner_1_time;
				second = runner1;
				third_time = runner_2_time;
				third = runner2;
			}
			if (runner_2_time < second_time&&runner_2_time < third_time) {
				second_time = runner_2_time;
				second = runner2;
				third_time = runner_1_time;
				third = runner1;
			}
			
			}
			*/
		cout << "The first place winner is " << first << " with time of " << first_time << endl
			<< "Second place is " << second << " with time of " << second_time << endl
			<< "Last place is " << third << " with time of " << third_time << endl;
	}

	return 0;
}