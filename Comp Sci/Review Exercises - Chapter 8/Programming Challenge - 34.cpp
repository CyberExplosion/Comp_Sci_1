//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main_done34c() {
//	// This is how to make a 2d vector, a vector inside another vector. 7 is row and 24 is columns
//	vector<vector<int>> vect_2d(7, vector<int>(24));
//	double average;
//	int total = 0;
//	// Below is how you get size of a columns inside vector
//	cout << vect_2d[0].size() << endl;
//	cout << vect_2d[vect_2d.size() - 1][vect_2d[0].size() - 1] << endl;
//
//	cout << "It's code from here\n";
//
//	for (int i = 0; i < vect_2d.size(); i++) {
//		for (int j = 0; j < vect_2d[i].size(); j++) {
//			vect_2d[i][j] = 10;
//		}
//	}
//	//Tuesday average. Tuesday will be on row 2
//	for (int k = 0; k < vect_2d[2].size(); k++) {
//		total += vect_2d[2][k];
//	}
//
//	average = total / vect_2d[2].size() * 1.0;
//	cout << "The average of Tuesday's temperature is: " << average << endl;
//
//	//Weekly noon average. Noon is at column 12
//	for (int m = 0; m < vect_2d.size(); m++) {
//		total += vect_2d[m][12];
//	}
//	average = total / vect_2d.size() * 1.0;
//	cout << "The average of Weekly noon temp is: " << average << endl;
//
//	return 0;
//}