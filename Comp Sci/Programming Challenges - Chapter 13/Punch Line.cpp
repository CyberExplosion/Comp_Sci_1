//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//void readJoke(ifstream& joke) {
//	int num = -5L;
//	string input;
//	if (! joke.eof()) {
//		getline(joke, input);
//		cout << input;
//	}
//	//cout << endl;
//	//joke.seekg(num, ios::end);
//	//while (!joke.eof()) {
//	//	getline(joke, input);
//	//	cout << input;
//	//}
//}
//
//void readPunchLine(ifstream& punch) {
//	char ch = '0';
//	int pos_lastline;
//	string input;
//	//Seek last in position of the file
//
//	for (pos_lastline = 0L; ch != '\n'; pos_lastline--) {
//		// When use "0" as a staring point for the position. The file is at the end point because of "0 away from the end". Therefore, it sets off the "end-of-line" failsafe bit. We need to clear it using clear() before we can do anything.
//		// This all can be prevented if we use 1 instead of 0 for our starting point, but meh
//		punch.clear();
//		punch.seekg(pos_lastline ,ios::end);
//		punch.get(ch);
//	}
//	while (!punch.eof()) {
//		getline(punch, input);
//		cout << " " << input;
//	}
//}
//
//int main() {
//	ifstream jokeFile,
//		punchFile;
//	jokeFile.open("joke.dat");
//	punchFile.open("punchline.dat");
//	if (jokeFile.fail()) {
//		cout << "Cannot open the joke.dat\n";
//		return 1;
//	}
//	if (punchFile.fail()) {
//		cout << "Cannot open the punchline.dat\n";
//		return 1;
//	}
//	readJoke(jokeFile);
//	readPunchLine(punchFile);
//
//	jokeFile.close();
//	punchFile.close();
//	return 0;
//}