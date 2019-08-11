//#include <iostream>
//#include <cmath>
//#include <iomanip>
//using namespace std;
//
//class Tips {
//private:
//	double tax_rate;
//public:
//	Tips() : tax_rate(0.065) {};
//	Tips(double tax) : tax_rate(tax) {};
//	double computeTip(double,double);
//};
//
//int main() {
//	double tax,
//		total,
//		tip;
//	char choice;
//
//	do {
//		cout << "Enter the tax rate in decimal for your restaurant: ";
//		cin >> tax;
//		Tips user(tax);
//		cout << "Enter the total bill money: ";
//		cin >> total;
//		cout << "Enter the tip rate you expect: ";
//		cin >> tip;
//		cout << showpoint << fixed << setprecision(2);
//		cout << "The tips amount you will get: " << user.computeTip(total, tip) << endl;
//		cout << "Do you want to continue to enter another bill(Y/N): ";
//		cin >> choice;
//	} while (toupper(choice) == 'Y');
//
//	return 0;
//}
//
//double Tips::computeTip(double total_bill, double tip_rate) {
//	//total bill = meal cost + (tax rate*meal cost)
//	//100 = x + (0.65*x)
//	// 100 - (0.65*x) = x
//	// 100 = x+(0.65*x)
//	//100 = 0.65x + x^2
//	//x^2 + 0.65x - 100 = 0
//	//(meal cost)^2 + tax rate * meal cost - total bill = 0
//	//Quadratic Equation, choose only the positive result
//	double a,
//		//a is always gona be 1
//		b = tax_rate,
//		c = total_bill,
//		discriminant = pow(b, 2) - (4 * (-c));
//	double root1, root2,
//		original_cost;
//
//	if (discriminant == 0) {
//		root1 = (-b) / 2;
//		root2 = root1;
//	}
//	if (discriminant > 0) {
//		root1 = ((-b) + sqrt(discriminant)) / 2;
//		root2 = ((-b) - sqrt(discriminant)) / 2;
//	}
//	if (discriminant < 0) {
//		cout << "Cannot calculate, determinant smaller than 0\n";
//		return 0;
//	}
//	if (root1 < 0) {
//		original_cost = root2;
//	}
//	else {
//		original_cost = root1;
//	}
//	//Done calculating the original price
//	return original_cost * tip_rate;
// }
