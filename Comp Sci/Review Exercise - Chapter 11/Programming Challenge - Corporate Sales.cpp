//#include <iostream>
//using namespace std;
//
//class DivSales {
//private:
//	double m_quarters_sale_figure[4];
//	static double total_sales;
//public:
//	void setQuarterSale_TotalSale(double qrt1, double qrt2, double qrt3, double qrt4);
//	double getQuarterSale(int index) {
//		return m_quarters_sale_figure[index-1];
//	}
//};
//
//double DivSales::total_sales = 0;
//
//int main() {
//	DivSales division1,
//		division2, division3, division4;
//	division1.setQuarterSale_TotalSale(12, 10, 10, 10);
//	cout << endl;
//	cout << division1.getQuarterSale(1);
//	return 0;
//}
//
//void DivSales::setQuarterSale_TotalSale(double qrt1, double qrt2, double qrt3, double qrt4) {
//	m_quarters_sale_figure[0] = qrt1;
//	m_quarters_sale_figure[1] = qrt2;
//	m_quarters_sale_figure[2] = qrt3;
//	m_quarters_sale_figure[3] = qrt4;
//	for (int i = 0; i < 4; i++) {
//		total_sales += m_quarters_sale_figure[i];
//	}
//	cout << total_sales;
//}
