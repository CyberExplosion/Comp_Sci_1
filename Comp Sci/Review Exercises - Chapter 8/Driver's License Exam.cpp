//#include <iostream>
//#include <vector>
//#include <sstream>
//using namespace std;
//
//class TestGrader {
//private:
//	char answer[5];
//public:
//	void setKey(const char[5]);
//	ostringstream grade(char[5]);
//};
//
//int main() {
//	TestGrader test;
//	const char right_answer[5] = { 'B','D','A','A','C' };
//	char test_taker[5];
//	char choice;
//
//	do {
//		test.setKey(right_answer);
//		for (int i = 0; i < 5; i++) {
//			cout << "Enter your answer for question number " << i + 1 << ": ";
//			cin >> test_taker[i];
//		}
//		cout << test.grade(test_taker).str();
//		cout << endl;
//		cout << "Do you want to try again? (Y/N)";
//		cin >> choice;
//	} while (toupper(choice) == 'Y');
//
//	return 0;
//}
//
//void TestGrader::setKey(const char answer[5]) {
//	for (int i = 0; i < 5; i++) {
//		this->answer[i] = answer[i];
//	}
//}
//
//ostringstream TestGrader::grade(char taker[5]) {
//	int correct = 0;
//	vector<int>incorrect(0);
//	ostringstream out;
//
//	for (int i = 0; i < 5; i++) {
//		switch (toupper(taker[i])) {
//		case 'A':
//		case 'B':
//		case 'C':
//		case 'D':
//			if (toupper(taker[i]) == answer[i]) {
//				correct++;
//			}
//			else {
//				incorrect.push_back(i + 1);
//			}
//			break;
//		default:
//			out << "Wrong formatted on question " << i + 1 << endl;
//			out << "Only A-D are allow\n";
//			break;
//		}
//	}
//	out << endl << "----------------------------------\n";
//	if (correct >= 3) {
//		out << "You passed the Exam!!!\n";
//	}
//	else {
//		out << "You failed the Exam\n";
//	}
//	out << "The number of right answer are: " << correct << endl
//		<< "The number of wrong answers are: " << 5 - correct << endl
//		<< "The questions you got wrong are: ";
//	for (int val : incorrect) {
//		out << val << " ";
//	}
//	return out;
//}
