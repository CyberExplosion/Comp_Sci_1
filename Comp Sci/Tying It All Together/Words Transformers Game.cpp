#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//The transpositions vectors are blueprint or plan, stores the index position that is to swap

/******************************
This is a version of Bubble sort that saves a list of all transpositions that are needed to sort the list
*******************************/
void sort(char str[], int size, vector<int>& transpositions) {
	int count = size;
	while(count > 0) {
		for (int i = 0; i < size - 1; i++) {
			if (str[i] > str[i + 1]) {
				//Save the swap index
				transpositions.push_back(i);
				swap(str[i], str[i + 1]);
			}
		}
		count--;
	}
}

int main() {
	//The two words and a copy of the first word
	char str1[] = "tops";
	char str1Copy[] = "tops";
	char str2[] = "spot";

	//These vectors hold the list of transpositions
	vector<int> transpose;
	vector<int>reverse_transpose;

	//Sort the two words
	cout << "The first word is " << str1 << endl
		<< "The second word is " << str2 << endl;
	sort(str1, 4, transpose);
	sort(str2, 4, reverse_transpose);

	//Apply the transposition plan to the "original word" will give us the transformation we want

	//Apply the first list of transpositions
	cout << "The transformation steps are: " << endl;
	cout << str1Copy << " ";
	for (int k = 0; k < transpose.size(); k++) {
		int index = transpose[k];
		swap(str1Copy[index], str1Copy[index + 1]);
		cout << str1Copy << " ";
	}
	//Apply the second list of transpositions in reverse order
	for (int k = reverse_transpose.size() - 1; k >= 0; k--) {
		int index = reverse_transpose[k];
		swap(str1Copy[index], str1Copy[index + 1]);
		cout << str1Copy << " ";
	}
	cout << endl;
}