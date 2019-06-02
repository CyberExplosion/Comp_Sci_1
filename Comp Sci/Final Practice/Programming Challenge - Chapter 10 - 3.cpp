#include <iostream>
using namespace std;

struct Person {
	string name;
	int age;
};

void pointerBubbleSort(Person* [], int);

int main_done3ch10() {
	const int NUM_EMPLOYEE = 3;
	Person data[NUM_EMPLOYEE] = 
	{ {"Khoi Nguyen", 19},
	{"Nelson Munoz", 25},
	{"Alexio Mc DouFace", 100} };
	Person* pData[NUM_EMPLOYEE];
	// Setting each pointer in the pData array to point to each corresponding value in data array
	for (int m = 0; m < NUM_EMPLOYEE; m++) {
		pData[m] = &data[m];
	}
	pointerBubbleSort(pData, NUM_EMPLOYEE);
	// Example of how pointers are sorted to go through alphabetic order by name
	for (int j = 0; j < NUM_EMPLOYEE; j++) {
		cout << pData[j]->name << endl;
	}
	return 0;
}

void pointerBubbleSort(Person* ptr_arr[], int size) {
	bool swap_flag = false;
	do {
		swap_flag = false;
		for (int i = 0; i < size - 1; i++) {
			if (ptr_arr[i]->name > ptr_arr[i + 1]->name) {
				swap(ptr_arr[i], ptr_arr[i + 1]);
				swap_flag = true;
			}
		}
	} while (swap_flag);
}