//#include <iostream>
//using namespace std;
//
//class Inventory {
//	int item_number,
//		quantity;
//	double cost;
//public:
//	Inventory() :item_number(0), quantity(0), cost(0) {};
//	Inventory(int, int, double);
//	void setItemNumber(int),
//		setQuantity(int),
//		setCost(double);
//	int getItemNumber(),
//		getQuantity();
//	double getCost(),
//		getTotalCost();
//};
//
//int main() {
//	int num,
//		quantity;
//	double cost;
//
//	cout << "Enter the item ID you want to assign to this item: ";
//	cin >> num;
//	cout << "Enter the quantity of items: ";
//	cin >> quantity;
//	cout << "Enter the cost for each item: ";
//	cin >> cost;
//
//	Inventory item(num, quantity, cost);
//	cout << "The total cost of the item in the inventory is: " << item.getTotalCost() << endl;
//
//	return 0;
//}
//
//Inventory::Inventory(int item_num, int quantity, double cost) {
//	setItemNumber(item_num);
//	setQuantity(quantity);
//	setCost(cost);
//}
//
//void Inventory::setItemNumber(int num) {
//	if (num < 0) {
//		this->item_number = 0;
//	}
//	else {
//		this->item_number = num;
//	}
//}
//
//void Inventory::setCost(double cost) {
//	if (cost < 0) {
//		this->cost = 0;
//	}
//	else {
//		this->cost = cost;
//	}
//}
//
//int Inventory::getItemNumber() {
//	return item_number;
//}
//
//int Inventory::getQuantity() {
//	return quantity;
//}
//
//double Inventory::getCost() {
//	return cost;
//}
//
//double Inventory::getTotalCost() {
//	return cost * quantity;
//}
//
//void Inventory::setQuantity(int quantity) {
//	if (quantity < 0) {
//		this->quantity = 0;
//	}
//	else {
//		this->quantity = quantity;
//	}
//}
