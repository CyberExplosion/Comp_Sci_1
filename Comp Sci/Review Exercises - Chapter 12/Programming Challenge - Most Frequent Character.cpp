//#include <iostream>
//#include <string>
//using namespace std;
//
//char mostFrequentChar(const char* str) {
//	int count = 0,
//		count_highest = -1;
//	char mostFrequent = 'null';
//	int index = 0,
//		inner_index = 0;
//	while (str[index] != '\0') {
//		//Reset the count
//		inner_index = 0;
//		count = 0;
//
//		while (str[inner_index]!='\0') {
//			if (str[index] == str[inner_index]) {
//				count++;
//			}
//			inner_index++;
//		}
//		if (count > count_highest || count_highest == -1) {
//			count_highest = count;
//			mostFrequent = str[index];
//		}
//		index++;
//	}
//	return mostFrequent;
//}
//
//int main() {
//	string user;
//	cout << "Enter a string without space: ";
//	cin >> user;
//	cout << "The most frequent character is: " << mostFrequentChar(user.c_str()) << endl;
//	return 0;
//}