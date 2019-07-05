//#include <iostream>
//#include <cctype>
//using namespace std;
//
//string replaceSubstring(const char* str_source, const char* substr_occur, const char* substr_replace) {
//	string modified(str_source);
//	int index = 0,
//		size = 0;
//	bool word_reading = false;
//	
//	while (substr_occur[size] != '\0') {
//		//Number of letters in the string
//		size++;
//	}
//
//	while (modified[index] != '\0') {
//		if (isspace(modified[index])) {
//			word_reading = false;
//		}
//		if (isalnum(modified[index]) && !(word_reading)) {
//			//Position for the first letter in a word
//			if (modified.substr(index, size) == substr_occur) {
//				modified.replace(index, size, substr_replace);
//			}
//			word_reading = true;
//		}
//		index++;
//	}
//	return modified;
//}
//
//int main() {
//	cout << replaceSubstring("the dog jumped over the fence", "the", "that");
//	return 0;
//}