//#include <iostream>
//#include <string>
//using namespace std;
//
//class BCheckString : public string {
//public:
//	class BoundsException {
//	public:
//		int index;
//		BoundsException(int i) : index(i) {};
//	};
//	BCheckString(string s) : string(s) {};
//	char operator[](int k) {
//		if (k < 0 || k >= size())
//			throw BoundsException(k);
//		return this->at(k);
//	}
//};
//
//
//int main() {
//	BCheckString name("Khoi");
//	int num;
//	cout << "Choose the index character you want: ";
//	cin >> num;
//	try {
//		cout << "The char ";
//		cout << "is: " << name[num] << endl;
//	}
//	catch (BCheckString::BoundsException& ex) {
//		cout << "is not inbound. Index " << ex.index << " is not valid.\n";
//	}
//}
