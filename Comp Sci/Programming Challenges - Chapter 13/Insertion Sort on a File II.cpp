//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int main() {
//	fstream file("insert sort.txt", ios::out | ios::in | ios::binary);
//	//Record of People
//	struct People {
//		//Highest allow number of characters for a name is 9 characters
//		char name[10];
//		int age;
//	};
//
//	int file_size = 0,
//		num_elem = 0;
//
//	if (file.fail()) {
//		cout << "The file failed to open\n";
//		return 1;
//	}
//	//Measure the size needed for vector
//	file.seekg(0, file.end);
//	file_size = file.tellg();
//	cout << "Size of file: " << file_size << endl;
//	file.seekg(0, file.beg);
//
//	//Number of elements in vector is equal to the total file size divide by the size of one element
//	num_elem = file_size / sizeof(People);
//	//Create vector big enough to store data
//	vector<People> buffer(num_elem);
//	cout << sizeof(buffer) << endl;
//	////Write sth to the file first
//	//People first_time;
//	//for (int i = 0; i < 9; i++) {
//	//	first_time.name[i] = 'a';
//	//}
//	//first_time.age = 15;
//	//buffer.push_back(first_time);
//	//file_size = sizeof(buffer);
//	//file.write(reinterpret_cast<char*>(buffer.data()), file_size);
//
//	//Open the file and read it into the vector
//	file.read(reinterpret_cast<char*>(buffer.data()), file_size);
//	//Sort the data, if there is data to sort
//	if (buffer.size() != 0) {
//		bool swap_flag = false;
//		do {
//			swap_flag = false;
//			for (int i = 0; i < buffer.size() - 1; i++) {
//				//Max characters for name is 9, so we only need to loop 9 times
//				for (int k = 0; k < 9; k++) {
//					if (toupper(buffer[i].name[k]) > toupper(buffer[i + 1].name[k])) {
//						swap(buffer[i], buffer[i + 1]);
//						swap_flag = true;
//						break;
//					}
//				}
//			}
//		} while (swap_flag == true);
//	}
//
//	cout << "Name\t\tAge\n";
//	//Output the data to the screen, if there is data
//	if (buffer.size() != 0) {
//		for (int p = 0; p < num_elem; p++) {
//			cout << buffer[p].name << "\t\t" << buffer[p].age << endl;
//		}
//	}
//
//	//Ask the user to enter a new name and age
//	//Create new people object
//	People user;
//	string name;
//	cout << "Enter a person name with no more than 9 characters: ";
//	cin >> name;
//	if (name.size() > 9) {
//		cout << "More than 9 characters\n";
//		return 2;
//	}
//	else {
//		for (int i = 0; i < name.size(); i++) {
//			user.name[i] = name[i];
//		}
//	}
//	cout << "Enter the person age: ";
//	cin >> user.age;
//
//	//Put the new person into the sorted vector and write it back to file
//	buffer.push_back(user);
//	file.write(reinterpret_cast<char*>(buffer.data()), buffer.size());
//	//Close the file
//	file.close();
//	return 0;
//}