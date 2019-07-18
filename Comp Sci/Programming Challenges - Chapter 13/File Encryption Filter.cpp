//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int main() {
//	ifstream inFile;
//	ofstream encryptedFile;
//	string line;
//	
//	inFile.open("new4 formatted.txt");
//	encryptedFile.open("new4 encrypted.txt");
//
//	if (inFile.fail()) {
//		cout << "Cannot open the input file\n";
//		return 1;
//	}
//	if (encryptedFile.fail()) {
//		cout << "Cannot created the encrypted fail\n";
//		return 1;
//	}
//
//	while (!inFile.eof()) {
//		getline(inFile, line);
//		for (int i = 0; i < line.size(); i++) {
//			line[i] = line[i] + 10;
//		}
//		cout << line << endl;
//		encryptedFile << line;
//	}
//
//	inFile.close();
//	encryptedFile.close();
//
//	return 0;
//}