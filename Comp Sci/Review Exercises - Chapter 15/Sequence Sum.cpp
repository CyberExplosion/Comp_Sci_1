//#include <iostream>
//using namespace std;
//
//
//class AbstractSeq {
//public:
//	void printSeq(int k, int m);
//	int sumSeq(int k, int m);
//protected:
//	virtual int fun(int k) = 0;
//};
//
//class SumOddSeq : public AbstractSeq {
//	virtual int fun(int k) override;
//};
//
//class SumFibonnaciNum : public AbstractSeq {
//	virtual int fun(int k) override;
//};
//
//int main() {
//	SumOddSeq seq1;
//	SumFibonnaciNum seq2;
//
//	cout << "The first 10 number in an odd number sequence are: \n";
//	seq1.printSeq(0, 9);
//	cout << "\nThe first 10 number in a Fibonacci sequence are: \n";
//	seq2.printSeq(0, 9);
//	cout << endl;
//	cout << "The sum of all the number in the odd sequence is: "
//		<< seq1.sumSeq(0, 9) << "\n"
//		<< "The sum of all the number in the Fibonacci's sequence is: "
//		<< seq2.sumSeq(0, 9) << "\n";
//}
//
//void AbstractSeq::printSeq(int k, int m) {
//	while (k <= m) {
//		cout << fun(k) << " ";
//		k++;
//	}
//}
//
//int AbstractSeq::sumSeq(int k, int m) {
//	if (k < 0 || m < 0) {
//		cout << "values cannot be negative";
//		return -1;
//	}
//	if (k == m)
//		return fun(m);
//	if (k > m)
//		return 0;
//	return fun(k) + sumSeq(k + 1, m);
//}
//
//int SumOddSeq::fun(int k) {
//	return 2 * k + 1;
//}
//
//int SumFibonnaciNum::fun(int k) {
//	if (k < 0) {
//		cout << "Doesn't take negative value\n";
//		return -1;
//	}
//	if (k <= 1)
//		return k;
//	return fun(k - 1) + fun(k - 2);
//}
