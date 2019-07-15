//#include <iostream>
//#include <string>
//#include <fstream>
//using namespace std;
//
//int main() {
//	string file_name;
//	ifstream inFile;
//	string input,
//		out;
//	const int MAX_LINE = 24;
//	int count = 0;
//
//	cout << "Enter the file name: ";
//	getline(cin, file_name);
//	inFile.open(file_name.c_str());
//	if (inFile.fail()) {
//		cout << "The file cannot be opened\n";
//		return 1;
//	}
//	while (!inFile.eof()) {
//		//put all the line into "out" so that we can use later if needed
//		getline(inFile, input);
//		out.append(input);
//		count++;
//	}
//
//	if (count > MAX_LINE) {
//		inFile.clear();
//		inFile.seekg(0, ios::beg);
//		//Make the user enter a key to get the rest
//		while(!inFile.eof()) {
//			//Reset the count for every time a page is turn
//			count = 0;
//			while (count < MAX_LINE && !(inFile.eof())) {
//				getline(inFile, input);
//				cout << input << endl;
//				//Count up whenever a line is iterate
//				count++;
//			}
//			cout << "\nEnter any key to continue displaying the next page...\n";
//			cin.ignore(100,'\n');
//		}
//	}
//	else {
//		//Just display the whole thing
//		cout << out << endl;
//	}
//	
//	return 0;
//}