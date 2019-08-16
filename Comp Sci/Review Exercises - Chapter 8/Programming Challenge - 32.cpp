//#include <iostream>
//#include <vector>
//#include <string>
//#include <fstream>
//using namespace std;
//
//int main_done32c() {
//	const int COUNTRY = 12;
//
//	vector<char> name(COUNTRY,'K');
//	vector<int> population(COUNTRY,1000);
//
//	ofstream outputFile;
//	outputFile.open("pop.dat");
//
//	if (outputFile) {
//		for (char read_name : name) {
//			outputFile << read_name << endl;
//		}
//		for (int number : population) {
//			outputFile << number << "\t";
//		}
//	}
//	else {
//		cout << "The program cannot open the file\n";
//	}
//
//
//	return 0;
//}