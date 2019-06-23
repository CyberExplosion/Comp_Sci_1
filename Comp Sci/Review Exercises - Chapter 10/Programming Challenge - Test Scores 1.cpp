//#include <iostream>
//#include <string>
//using namespace std;
//// Modified for problem #2 also
//
//struct Student {
//	string name;
//	int score;
//};
//
//void AscendingSort(Student *arr, int size) {
//	bool swap_flag = false;
//	do {
//		// Reset the flag
//		swap_flag = false;
//		for (int i = 0; i < size - 1; i++) {
//			if ((arr + i)->score > (arr + i + 1)->score) {
//				// Swap both the name and the score accordingly
//				swap((*(arr + i)), (*(arr + i + 1)));
//				swap_flag = true;
//			}
//		}
//	} while (swap_flag == true);
//	return;
//}
//
//double calcAverage(Student* arr, int size) {
//	double sum = 0;
//	for(int i = 0; i < size; i++) {
//		sum += (arr + i)->score;
//	}
//	return sum / size;
//}
//
//int main() {
//	const int NUM_STUDENTS = 5;
//	Student test_scores[NUM_STUDENTS];
//	for (int i = 0; i < NUM_STUDENTS; i++) {
//		do {
//			cout << "Enter the name of the student: ";
//			getline(cin, (test_scores + i)->name);
//			cout << "Enter grade for " << (test_scores + i)->name << ": ";
//			cin >> (test_scores + i)->score;
//			if ((test_scores + i)->score < 0) {
//				cout << "Please enter an bigger or equal to 0\n";
//			}
//			cin.ignore(100, '\n'); cin.clear(); cin.sync();
//		} while ((test_scores + i)->score < 0);
//	}
//	AscendingSort(test_scores, NUM_STUDENTS);
//	for (int j = 0; j < NUM_STUDENTS; j++) {
//		cout << (test_scores + j)->name << " grade is: " << (test_scores + j)->score << endl;
//	}
//	cout << "The average grade of " << NUM_STUDENTS << " students is: " << calcAverage(test_scores, NUM_STUDENTS);
//	return 0;
//}