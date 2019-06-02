#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void stringSelectionSort(string[],int);

int main_done15ch9() {
	const int SIZE = 20;
	string name[SIZE];
	fstream inputFile;
	string file_name = "name.dat";
	inputFile.open(file_name.c_str(), ios::in | ios::out);
	if (inputFile.fail()) {
		cout << "Operation Failed";
		exit(1);
	}
	// Using getline to circumvent the fact that normal ">>" doesn't read white space
	for (int j = 0; j < SIZE; j++) {
		getline(inputFile, name[j]);
	}
	stringSelectionSort(name, SIZE);
	for (int i = 0; i < SIZE; i++) {
		cout << name[i] << endl;
	}
	return 0;
}

void stringSelectionSort(string name_list[], int size) {
	string temp;
	for (int i = 0; i < size-1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (name_list[i] > name_list[j]) {
				swap(name_list[i], name_list[j]);
			}
		}
	}
	return;
}