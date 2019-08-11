//#include <iostream>
//using namespace std;
//
//struct CorpData {
//	string division_name;
//	double qrt_1_sale,
//		qrt_2_sale,
//		qrt_3_sale,
//		qrt_4_sale;
//	CorpData(string name, double first, double second, double third, double fourth) {
//		division_name = name;
//		qrt_1_sale = first;
//		qrt_2_sale = second;
//		qrt_3_sale = third;
//		qrt_4_sale = fourth;
//	}
//};
//
//double annualSalesTotal(const CorpData& division) {
//	return division.qrt_1_sale + division.qrt_2_sale + division.qrt_3_sale + division.qrt_4_sale;
//}
//
//double qrtAverage(const CorpData& div) {
//	return annualSalesTotal(div) / 4;
//}
//
//int main() {
//	CorpData East("Gay", 100.2, 200.3, 456, 803.2),
//		West("Wow", 569.1, 456.3, 268.5, 499.2),
//		North("My man", 569.1, 546.2, 489.1, 555.1),
//		South("Get gud", 598.1, 458.4, 569.2, 482.1);
//	
//	cout << "Division " << East.division_name << " total sales: " << annualSalesTotal(East) << " and average sales: " << qrtAverage(East) << endl;
//	cout << "Division " << West.division_name << " total sales: " << annualSalesTotal(West) << " and average sales: " << qrtAverage(West) << endl;
//	cout << "Division " << North.division_name << " total sales: " << annualSalesTotal(North) << " and average sales: " << qrtAverage(North) << endl;
//	cout << "Division " << North.division_name << " total sales: " << annualSalesTotal(North) << " and average sales: " << qrtAverage(North) << endl;
//
//	return 0;
//}