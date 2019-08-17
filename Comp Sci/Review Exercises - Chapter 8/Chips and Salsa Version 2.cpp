//#include <iostream>
//using namespace std;
//
//class Product {
//private:
//	string name;
//	int quantity;
//public:
//	void setName(string t_name) {
//		name = t_name;
//	}
//	string getName() {
//		return name;
//	}
//	void setQuantity(int num) {
//		quantity = num;
//	}
//	int getQuantity() {
//		return quantity;
//	}
//};
//
//int main() {
//	int num,
//		total_sales = 0;
//	Product salsa[5];
//	salsa[0].setName("mild");
//	salsa[1].setName("medium");
//	salsa[2].setName("sweet");
//	salsa[3].setName("hot");
//	salsa[4].setName("zesty");
//
//	for (int i = 0; i < 5; i++) {
//		cout << "Enter the number of jars for " << salsa[i].getName() << ": ";
//		cin >> num;
//		salsa[i].setQuantity(num);
//
//	}
//	cout << endl;
//	cout << "--------------------------------------\n";
//	cout << "REPORT\n";
//	cout << "Sales:\n";
//	for (int i = 0; i < 5; i++) {
//		total_sales += salsa[i].getQuantity();
//		cout << salsa[i].getName() << ": " << salsa[i].getQuantity();
//		cout << endl;
//	}
//	cout << "TOTAL SALES: " << total_sales << endl;
//	//Sort bubble
//	bool flag = false;
//	do {
//		flag = false;
//		for (int i = 0; i < 5 - 1; i++) {
//			if (salsa[i].getQuantity() > salsa[i+1].getQuantity()) {
//				swap(salsa[i], salsa[i+1]);
//				flag = true;
//			}
//		}
//	} while (flag == true);
//	cout << "The highest selling product is: " << salsa[4].getName() << " with amounts of total " << salsa[4].getQuantity() << " products" << endl;
//	cout << "The lowest selling product is: " << salsa[0].getName() << " with amounts of total " << salsa[0].getQuantity() << " products" << endl;
//
//	return 0;
//}