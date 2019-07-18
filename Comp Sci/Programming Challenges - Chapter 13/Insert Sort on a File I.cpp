//This whole thing is wrong, but I don't know how to fix it. Maybe in the future

//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int main() {
//	fstream workingFile("sorted binary.txt", ios::out | ios::in | ios::binary);
//	int number = 0,
//		num_file = 0;
//	int size = 0;
//
//	if (workingFile.fail()) {
//		cout << "File failed to open\n";
//		return 1;
//	}
//	//Get size of file
//	workingFile.seekg(0, workingFile.end);
//	//Size of file = the amount of bytes at the end
//	size = workingFile.tellg();
//	//Set the reference back to the beginning
//	workingFile.seekg(0);
//
//	//Read the file into memory
//	vector<int>buffer(size);
//	//Use unique_ptr. get() function to use raw pointer, the reinterpret casting only takes raw pointers
//	workingFile.read(reinterpret_cast<char*>(buffer.data()), size);
//	//Print out the list of number
//	for (int i = 0; i < size; i++) {
//		cout << buffer[i] << "  ";
//	}
//	//Ask the user
//	cout << endl << "Enter an integer: ";
//	cin >> number;
//	if (buffer.size() > 0) {
//		if (number > buffer[size - 1]) {
//			buffer.push_back('\n');
//			buffer.push_back(number);
//		}
//		else {
//			//Backward, cause the thing said so. No need to check for size-1 cause we already did
//			for (int i = size - 2; i >= 0; i--) {
//				if (number > buffer[i]) {
//					//This format is stupid, but whatever. We have to use end() or begin(), the function doesn't allow index, only iterator
//					buffer.insert(buffer.end() - (size - i - 1), '\n');
//					buffer.insert(buffer.end() - (size - i), number);
//				}
//			}
//		}
//	}
//	else {
//		buffer.push_back('\n');
//		buffer.push_back(number);
//	}
//	workingFile.write(reinterpret_cast<char*>(buffer.data()), buffer.size());
//		/*size = sizeof(buffer) / sizeof(buffer[0]);
//
//		for (int i = 0; i < size; i++) {
//			cout << buffer[i] << "  ";
//		}
//		cout << endl;
//
//		Loop till true
//		cout << "Enter a new integer: \n";
//		cin >> number;
//		bool insert_success_flag = false;
//
//		Start by looking at the last number
//		for (int i = 0; i < 3; i++) {
//
//		}*/
//
//	workingFile.close();
//	return 0;
//}