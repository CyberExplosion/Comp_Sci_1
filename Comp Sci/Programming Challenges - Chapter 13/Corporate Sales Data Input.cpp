#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	//enum Division {
	//	E,
	//	W,
	//	N,
	//	S
	//};

	double qrt_total[4] = { 0,0,0,0 },
		division_total[4] = { 0,0,0,0 },
		total_corp = 0,
		qrt_avg_division[4] = { 0,0,0,0 },
		highest_qrt = -9999,
		lowest_qrt = -9999;
	char ch;
	double number;
	ifstream file;
	file.open("Corporate Output.txt");

	if (file.fail()) {
		cout << "File failed successfully\n";
		return 1;
	}

	//Total corporate sales for each quarter
	int div_count = 0;
	while (!file.eof()) {
		ch = file.peek();
		if (isdigit(ch)) {
			for (int i = 0; i < 4; i++) {
				file >> number;
				qrt_total[i] += number;
			}
		}
		else {
			//Just read and throw away
			ch = file.get();
		}
	}
	//Display
	cout << "Total corporate sales for each quarter: \n";
	for (div_count = 0; div_count < 4; div_count++) {
		cout << "Quarter " << div_count + 1 << ": " << qrt_total[div_count] << endl;
	}
	
	//Clear the eof state and set it back
	file.clear();
	file.seekg(0, file.beg);

	//Total yearly sales for each division
	div_count = 0;
	while (!file.eof()) {
		ch = file.peek();
		if (isdigit(ch)) {
			for (int i = 0; i < 4; i++) {
				file >> number;
				division_total[div_count] += number;
			}
			div_count++;
		}
		//Throw away and move on
		file.get(ch);
	}
	//Display
	cout << "Total yearly sales for each division:\n";
	for (div_count = 0; div_count < 4; div_count++) {
		cout << "Division " << div_count + 1 << ": " << division_total[div_count] << endl;
	}

	//Total yearly corporate sales
	for (div_count = 0; div_count < 4; div_count++) {
		total_corp += division_total[div_count];
	}
	cout << "The total yearly corporate sales are: " << total_corp << endl;

	//Average quarterly sales for the division
	for (div_count = 0; div_count < 4; div_count++) {
		qrt_avg_division[div_count] = division_total[div_count] / 4;
	}
	for (div_count = 0; div_count < 4; div_count++) {
		cout << "Average sales of division on quarter " << div_count + 1 << ": " << qrt_avg_division[div_count] << endl;
	}

	//The highest and lowest quarters for the corporation
	int highest, lowest;
	for (div_count = 0; div_count < 4; div_count++) {
		if (qrt_total[div_count] > highest_qrt || highest_qrt == -9999) {
			highest_qrt = qrt_total[div_count];
			highest = div_count;
		}
		if (qrt_total[div_count < lowest_qrt] || lowest_qrt == -9999) {
			lowest_qrt = qrt_total[div_count];
			lowest = div_count;
		}
	}

	cout << "The highest quarter sales is quarter number " << highest <<". With sales of total: " << highest_qrt << endl;
	cout << "The lowest quarter sales is quarter number " << lowest << ". With sales of total: " << lowest_qrt << endl;

	file.close();
	return 0;
}