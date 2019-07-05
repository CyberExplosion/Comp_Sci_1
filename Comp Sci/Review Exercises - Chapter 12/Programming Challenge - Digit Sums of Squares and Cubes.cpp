//#include <iostream>
//#include <string>
//#include <cmath>
//using namespace std;
//
////Add challenge 14
//string dollarFormat(double amount) {
//	int whole_number = amount,
//		decimal = (amount - whole_number) * 100;
//	int index = 0;
//	string number_word[9] = { "one","two","three","four","five", "six","seven","eight","nine" };
//	string number_word_smaller20[10] = { "ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen" };
//	string formated;
//
//	if (whole_number <= 999 && whole_number >= 100) {
//		index = whole_number / 100;
//		whole_number /= 10;
//		formated += number_word[index - 1] + " hundred ";
//	}
//	if (whole_number <= 99 && whole_number >= 20) {
//		index = whole_number / 10;
//		formated += number_word[index - 1] + "ty ";
//		whole_number /= 10;
//		formated += number_word[index - 1];
//	}
//	else if (whole_number <= 19 && whole_number >= 10) {
//		formated += " and " + number_word_smaller20[index];
//	}
//	if (decimal != 0) {
//		formated += " and " + decimal;
//		formated += " cents";
//	}
//
//	return formated;
//}
//
//
//int main() {
//	string number_str;
//	int sum;
//	int power2,
//		power3;
//
//	cout << "The list of numbers that have its' square, cube and itself equal to each of their sum of each digit: ";
//	for (int i = 1000; i > 0; i--) {
//		sum = 0;
//		number_str = to_string(i);
//		for (char val : number_str) {
//			sum += val - '0';
//		}
//		power2 = pow(i, 2);
//		number_str = to_string(power2);
//		// Change the value back to 0 so the operator would work
//		power2 = 0;
//		for (char val : number_str) {
//			power2 += val - '0';
//		}
//		//If the first power is not equal, there is no need to check for the third power
//		if (sum != power2) {
//			continue;
//		}
//		else {
//			power3 = pow(i, 3);
//			number_str = to_string(power3);
//			//Change the value back to 0 so the short plus-assignment operator would work like intended
//			power3 = 0;
//			for (char val : number_str) {
//				power3 += val - '0';
//			}
//			if (sum == power3 && power2 == power3) {
//				cout << i << ": ";
//				cout << dollarFormat(i) << endl;
//			}
//		}
//	}
//	cout << endl;
//	return 0;
//}