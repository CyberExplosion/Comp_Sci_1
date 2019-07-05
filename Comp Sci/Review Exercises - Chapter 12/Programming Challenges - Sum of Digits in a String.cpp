//#include <iostream>
//#include <string>
//using namespace std;
//
//int sumOfDigitsInString(string numbers) {
//	int sum = 0;
//	for (char val : numbers) {
//		sum += val - '0';
//	}
//	return sum;
//}
//
//int highestDigitInString(string number) {
//	int highest = -1;
//	for (char val : number) {
//		if (val - '0' > highest || highest == -1) {
//			highest = val - '0';
//		}
//	}
//	return highest;
//}
//
//int lowestDigitInString(string number) {
//	int lowest = -1;
//	for (char val : number) {
//		if (val - '0' < lowest || lowest == -1) {
//			lowest = val - '0';
//		}
//	}
//	return lowest;
//}
//
//int main() {
//	string series;
//	cout << "Enter a series of single-digit numbers with no space between each: ";
//	cin >> series;
//	cout << "The sum of the digits in string is: " << sumOfDigitsInString(series) << endl;
//	cout << "The highest digit in the string is: " << highestDigitInString(series) << endl;
//	cout << "The lowest digit in the string is: " << lowestDigitInString(series) << endl;
//	return 0;
//}