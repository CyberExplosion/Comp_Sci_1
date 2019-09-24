//#include <iostream>
//using namespace std;
//
//int Ackermann(int m, int n) {
//	if (m == 0) {
//		return n + 1;
//	}
//	if (n == 0) {
//		return Ackermann(m - 1, 1);
//	}
//	return Ackermann(m - 1, Ackermann(m, n - 1));
//}
//
//int main() {
//
//	cout << "Display:\n";
//	//4,2 can't produce, because it's way too hard, no computer has been able to
//	cout << Ackermann(4, 2) << endl;
//
//	return 0;
//}