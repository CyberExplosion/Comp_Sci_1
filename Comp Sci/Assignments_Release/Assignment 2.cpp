//Khoi Nguyen
//CS1, Section #0109
//Assignment 2
//A program thta displays the result of 3.0 * 5.0, 7.1 * 8.3 - 2.2, and 3.2 / (6.1 * 5). Display the result of each calculation vertically, decimal right aligned, and rounded to two decimal places similar to what is shown below. Each number should be displayed using either a numeric constant or an expression. Don't need to take input, only output the results.

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	/*Pseudo Code
Input: num1, num2, num3
Processing:
	3.0 * 5.0 = result1
	7.1 * 8.3 - 2.2 = result2
	3.2 / (6.1*5) = resutl3
Output:
	Display 3.0, with enough space before so it alligns with 5.0 below
	Display * and 5.0 beneath
	Format the Output to look like the one in Sample Run
	Continue doing the same thing for other two equation
end
-- Variable used:
	double result1, result2, result3
*/
	double result1, result2, result3, num1, num2, num3;
	//Input 1
	cout << "Enter value for num1: ";
	cin >> num1;
	cout << "Enter value for num2: ";
	cin >> num2;
	//Processing1
	result1 = num1 * num2;
	//Output Format
	cout << showpoint << fixed;
	//Output1
	cout << setprecision(1) << setw(6) << num1 << endl << left << setw(3) << "*" << num2 << endl << "------" << endl << setprecision(2) << right << setw(6) << result1 << endl << endl;
	//Input2
	cout << "Enter value for num1: ";
	cin >> num1;
	cout << "Enter value for num2: ";
	cin >> num2;
	cout << "Enter value for num3: ";
	cin >> num3;
	//Processing2
	result2 = num1 * num2 - num3;
	//Output2
	cout << setprecision(1) << setw(6) << num1 << endl << left << setw(3) << "*" << num2 << endl << setw(3) <<"-" << num3 << endl << "------" << endl << setprecision(2) << right << setw(6) << result2 << endl << endl;
	//Input3
	cout << "Enter value for num1: ";
	cin >> num1;
	cout << "Enter value for num2: ";
	cin >> num2;
	cout << "Enter value for num3 ";
	cin >> num3;
	//Processing3
	result3 = num1 / (num2 * num3);
	//Output3
	cout << setprecision(1) << setw(5) << num1 << endl << "/(" << num2 << "*" << num3 << ")" << endl << "------------" << endl << setprecision(2) << setw(6) << result3 << endl;
	
	return 0;
}