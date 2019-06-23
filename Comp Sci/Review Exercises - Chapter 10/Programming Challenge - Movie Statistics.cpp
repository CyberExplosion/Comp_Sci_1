//#include <iostream>
//#include <memory>
//using namespace std;
//
//double findAverage(unique_ptr<int[]>&, int);
//double findMedian(unique_ptr<int[]>&, int);
//double findMode(unique_ptr<int[]>&, int);
//
//int main() {
//	int num_student;
//	cout << "How many students were surveyed? ";
//	cin >> num_student;
//	unique_ptr<int[]>num_movies = make_unique<int[]>(num_student);
//	for (int i = 0; i < num_student; i++) {
//		cout << "Enter the amount of movies seen for student number " << i + 1 << ": ";
//		cin >> num_movies[i];
//	}
//	cout << "The average of the number of movies seen is: " << findAverage(num_movies, num_student) << endl;
//	cout << "The median of the movies: " << findMedian(num_movies, num_student) << endl;
//	cout << "The mode of the movies: " << findMode(num_movies, num_student) << endl;
//
//	return 0;
//}
//
//double findAverage(unique_ptr<int[]>& arr, int size) {
//	double sum = 0;
//	for (int i = 0; i < size; i++) {
//		sum += arr[i];
//	}
//	return sum / size;
//}
//
//double findMedian(unique_ptr<int[]>&arr, int size) {
//	// Sort
//	bool swap_flag;
//	do {
//		swap_flag = false;
//		for (int i = 0; i < size - 1; i++) {
//			if (arr[i] > arr[i + 1]) {
//				swap(arr[i], arr[i + 1]);
//				swap_flag = true;
//			}
//		}
//	} while (swap_flag == true);
//	// find median
//	int index;
//	double median;
//	if (size % 2 == 0) {
//		//even
//		index = size / 2 - 1;
//		median = (arr[index] + arr[index + 1]) / 2.0;
//	}
//	else {
//		//odd
//		index = (size - 1) / 2;
//		median = arr[index];
//	}
//	return median;
//}
//
//double findMode(unique_ptr<int[]>&arr, int size) {
//	// Initiate with default value
//	int mode = -1;
//	int lower_num_appearance = 0;
//	int num_appearance;
//	for (int i = 0; i < size; i++) {
//		num_appearance = 0;
//		for (int m = 0; m < size; m++) {
//			if (arr[i] == arr[m]) {
//				num_appearance++;
//			}
//		}
//		if (lower_num_appearance < num_appearance || lower_num_appearance == 0) {
//			lower_num_appearance = num_appearance;
//			mode = arr[i];
//		}
//	}
//	return mode;
//}
