//#include <iostream>
//#include <vector>
//using namespace std;
//
//template <typename T>
//void reverseElem(vector<T>& arr) {
//	//Base case
//	if (arr.empty())
//		return;
//	T value = arr.back();
//	//Recursive
//	arr.pop_back();
//	reverseElem(arr);
//
//	//Put thing back
//	auto arr_iter = begin(arr);
//	arr.insert(arr_iter, value);
//}
//
//int main() {
//	vector<int>num = { 1,2,3,4 };
//	vector<double>dec = { 1.1,2.2,3.3,4.4 };
//	vector<string>name = { "Khoi Nguyen", "Wow", "You're so" ,"Handsome" };
//	reverseElem(num);
//	reverseElem(dec);
//	reverseElem(name);
//
//	for (auto val : num) {
//		cout << val << "  ";
//	}
//	cout << endl;
//	for (auto val : dec) {
//		cout << val << "  ";
//	}
//	cout << endl;
//	for (auto val : name) {
//		cout << val << "  ";
//	}
//	cout << endl;
//}