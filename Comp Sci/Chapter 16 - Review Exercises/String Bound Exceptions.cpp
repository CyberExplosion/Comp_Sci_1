//#include <iostream>
//#include <string>
//using namespace std;
//
//class BCheckString : public string {
//private:
//public:
//	//Exception Class
//	class BoundsException {};
//	//Stuffs
//	BCheckString(string s) : string(s) {};
//	char operator[](int k);
//};
//
//int main() {
//	BCheckString name("Khoi");
//	try {
//		cout << name[5] << endl;
//	}
//	catch (BCheckString::BoundsException) {
//		cout << "This value is out of range\n";
//	}
//	cout << "This is the end\n";
//}
//
//char BCheckString::operator[](int k) {
//	if (k < 0 || k >= size()) {
//		throw BoundsException();
//	}
//	return at(k);
//}
