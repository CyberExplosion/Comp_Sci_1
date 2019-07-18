////unget() and putback()
//
//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int main() {
//	//Variable needed to read characters and numbers
//	char ch;
//	int number;
//	//Variables for file handling
//	string fileName;
//	fstream inFile, outFile;
//	//Open the file to be modified
//	cout << "Enter a file name: ";
//	getline(cin, fileName);
//	inFile.open(fileName.c_str(), ios::in);
//	if (!inFile) {
//		cout << "Cannot open file " << fileName;
//		return 1;
//	}
//	//Open the file to receive the modified copy
//	outFile.open("modified.txt", ios::out);
//	if (!outFile) {
//		cout << "Cannot open the output file.\n";
//		return 2;
//	}
//	//Copy the input file one character at a time
//	//except numbers in the input file must have 1
//	//added to them
//	
//	ch = inFile.get();
//	while (ch != EOF) {
//		if (isdigit(ch)) {
//			inFile.putback(ch);
//			//Numbers should be read with >>. The >> use whitespace as delimiter so we will have many digits number
//			inFile >> number;
//			outFile << number + 1;
//		}
//		else {
//			//Just a simple character, read it and copy it
//			outFile << ch;
//		}
//		ch = inFile.get();
//	}
//	inFile.close();
//	outFile.close();
//
//	return 0;
//}