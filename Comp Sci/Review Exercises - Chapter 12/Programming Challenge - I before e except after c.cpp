//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int main() {
//	bool word_counting = false;
//	string original,
//		temp,
//		word = "",
//		modified;
//	ifstream inFiles;
//	inFiles.open("test.txt");
//	if (!inFiles) {
//		cout << "Open file failed!\n";
//		exit(1);
//	}
//	//Working with fies
//	getline(inFiles, original);
//	//Detect word portion
//	for (int i = 0; i < original.size(); i++) {
//		if (isspace(original[i])) {
//			word_counting = false;
//		}
//		if (isalnum(original[i]) && !(word_counting)) {
//			//Inner loop for counting a word
//			for (int m = i; !(isspace(original[m])) && m < original.size(); m++) {
//				word.push_back(original[m]);
//			}
//			word_counting = true;
//		}
//		//Working with individual word
//		if (word != "") {
//			for (int j = 0; j < word.size() - 1; j++) {
//				if ((word[j] == 'i' && word[j + 1] == 'e') || (word[j] == 'e' && word[j + 1] == 'i')) {
//					cout << word << endl;
//				}
//			}
//			word.clear();
//		}
//	}
//
//	return 0;
//}