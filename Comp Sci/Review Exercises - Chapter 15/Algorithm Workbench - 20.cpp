//#include <iostream>
//using namespace std;
//
//class Pure {
//protected:
//	int arr[5] = { 4,5,3,1,2 };
//	virtual bool compare(int x, int y) = 0;
//
//public:
//	//Bubble
//	void sort() {
//		bool flag = false;
//		do {
//			flag = false;
//			for (int i = 0; i < 5 - 1; i++) {
//				if (!compare(arr[i], arr[i + 1])) {
//					swap(arr[i], arr[i + 1]);
//					flag = true;
//				}
//			}
//		} while (flag == true);
//	}
//};
//
//class Ascending : public Pure {
//private:
//	virtual bool compare(int x, int y) override {
//		return x < y;
//	}
//};
//
//class Descending : public Pure {
//private:
//	virtual bool compare(int x, int y) override {
//		return x > y;
//	}
//};
//
//int main() {
//	Ascending ascen;
//	Descending descen;
//
//	ascen.sort();
//	descen.sort();
//
//	cout << "Done\n";
//}