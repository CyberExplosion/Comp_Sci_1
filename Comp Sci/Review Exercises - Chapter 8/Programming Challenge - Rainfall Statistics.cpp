//#include <iostream>
//#include <vector>
//#include <iomanip>
//using namespace std;
//
//void getData(vector<double>);
//double totalRainfall(vector<double>);
//double averageRainfall(vector<double>rainfall);
//int wettestMonth(vector<double>rain_measure);
//int driestMonth(vector<double>rain_seeing);
//
//int main_done8() {
//	vector<double> rain_month(12);
//
//	cout << showpoint << fixed << setprecision(2);
//	cout << "\t2015 Rain Report for Neversnows County\n\n";
//	cout << "Total rainfall: " << totalRainfall(rain_month) << " inches\n";
//	cout << "Average monthly rainfall: " << averageRainfall(rain_month) << " inches\n";
//	cout << "The least rain fell in " << driestMonth(rain_month) + 1 << " with " << rain_month[driestMonth(rain_month)] << " inches\n";
//	cout << "The mot rain fell in " << wettestMonth(rain_month) + 1 << " with " << rain_month[wettestMonth(rain_month)] << " inches\n";
//
//	return 0;
//}
//
//void getData(vector<double> rain_month) {
//	for (int i = 0; i < rain_month.size(); i++) {
//		cout << "Enter the rain amount for month number " << i+1 << " : ";
//		cin >> rain_month[i];
//	}
//}
//
//double totalRainfall(vector<double> rain) {
//	double total{ 0 };
//	for (double val : rain) {
//		total += val;
//	}
//	return total;
//}
//
//double averageRainfall(vector<double>rainfall) {
//	return totalRainfall(rainfall) / (rainfall.size());
//}
//
//int wettestMonth(vector<double>rain_measure) {
//	double wettest = 0;
//	for (int i = 0; i < rain_measure.size();i++) {
//		if (rain_measure[i] > wettest || wettest == 0) {
//			wettest = i;
//		}
//	}
//	return wettest;
//}
//
//int driestMonth(vector<double>rain_seeing) {
//	double driest = 0;
//	for (int i = 0; i < rain_seeing.size();i++) {
//		if (rain_seeing[i] < driest || driest == 0) {
//			driest = i;
//		}
//	}
//	return driest;
//}