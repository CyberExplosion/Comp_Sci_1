//#include <iostream>
//#include <string>
//using namespace std;
////7
////int function(int);
//
////10
//void function(string, int);
//
//int main() {
//	int x = 6;
//	string name = "Adam and Eve";
//	function(name, 0);
//
//	return 0;
//}
//
////7
////int function(int num) {
////	if (num <= 0) {
////		return 0;
////	}
////	else {
////		return function(num - 1) + num;
////	}
////}
//
////10
////int i = 0;
////void function(int num) {
////	if (num > 0) {
////		for (int x = 0; x < num; x++) {
////			i++;
////			cout << "*" << " " << i << endl;
////			function(num - 1);
////		}
////	}
////}
//// iT will produce a total number of loop = num*( x*(num-1) + 1 [base case] )
//
//void function(string str, int pos) {
//	if (pos < str.length()) {
//		function(str, pos + 1);
//		cout << str[pos];
//	}
//}