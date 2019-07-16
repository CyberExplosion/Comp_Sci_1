//This does not account for whole word string and will look even into a portion of the string
//If you want to have a whole word option in looking for a string, you have to incorporate the finding words technique. There is one I already made in past Challenges

//#include <iostream>
//#include <string>
//#include <fstream>
//using namespace std;
//
//int main() {
//	string file_name,
//		search_line;
//	string line;
//	int appearance = 0,
//		in_line_appearance = 0;
//	ifstream searchFile;
//	char ch;
//
//	cout << "Enter the name of the file to search the string: ";
//	getline(cin, file_name);
//	cout << "Enter the string that you want to search: ";
//	getline(cin, search_line);
//
//	searchFile.open(file_name.c_str());
//	if (searchFile.fail()) {
//		cout << "The file opened unsuccessfully\n";
//		return 1;
//	}
//	while (!searchFile.eof()) {
//		in_line_appearance = 0;
//		getline(searchFile, line);
//		for (int i = 0; i < line.size(); i++) {
//			if (search_line == line.substr(i, search_line.length())) {
//				appearance++;
//				in_line_appearance++;
//				if (in_line_appearance == 1) {
//					cout << line << endl;
//				}
//			}
//		}
//	}
//	cout << "The number the string appear in the file: " << appearance << endl;
//searchFile.close();

//	return 0;
//}