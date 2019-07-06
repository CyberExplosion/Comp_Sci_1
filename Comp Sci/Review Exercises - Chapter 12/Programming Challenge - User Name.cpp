//#include <iostream>
//using namespace std;
//
//int main() {
//	string name,
//		original;
//	int first_pos,
//		size;
//	const string header = "USERNAME=";
//	char delimiter = '\n';
//	extern char** environ;
//	bool word_counting;
//
//	int k = 0;
//	while (environ[k] != 0) {
//		original.append(environ[k]);
//		original.push_back(delimiter);
//		k++;
//	}
//	//Finding the word USERNAME=. The first potion where user's name will appear
//	first_pos = original.find(header) + header.size();
//	//size
//	size = original.find(delimiter, first_pos) - first_pos;
//	//substre(pos, size)
//	name = original.substr(first_pos, size);
//	cout << "Hello, " << name << endl;
//	return 0;
//}