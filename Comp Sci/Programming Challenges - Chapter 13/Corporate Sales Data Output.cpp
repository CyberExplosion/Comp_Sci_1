//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int main() {
//	struct Division{
//		string name;
//		double qrt_sales[4];
//	};
//	Division East,
//		West,
//		North,
//		South;
//	fstream file("Corporate Output.txt", ios::out | ios::in);
//	
//	if (file.fail()) {
//		cout << "File opened failed\n";
//		return 1;
//	}
//	
//	cout << "Enter the name for the East Division: ";
//	getline(cin, East.name);
//	file << East.name << " ";
//	for (int i = 0; i < 4; i++) {
//		cout << "Enter the sales of " << East.name << " division for quarter " << i + 1 << ": ";
//		cin >> East.qrt_sales[i];
//		file << East.qrt_sales[i] << " ";
//	}
//	file << endl;
//	cin.ignore(100, '\n'); cin.clear(); cin.sync();
//
//	cout << "Enter the name for the West Division: ";
//	getline(cin, West.name);
//	file << West.name << " ";
//	for (int i = 0; i < 4; i++) {
//		cout << "Enter the sales of " << West.name << " division for quarter " << i + 1 << ": ";
//		cin >> West.qrt_sales[i];
//		file << West.qrt_sales[i] << " ";
//	}
//	file << endl;
//	cin.ignore(100, '\n'); cin.clear(); cin.sync();
//
//	cout << "Enter the name for the North Division: ";
//	getline(cin, North.name);
//	file << North.name << " ";
//	for (int i = 0; i < 4; i++) {
//		cout << "Enter the sales of " << North.name << " division for quarter " << i + 1 << ": ";
//		cin >> North.qrt_sales[i];
//		file << North.qrt_sales[i] << " ";
//	}
//	file << endl;
//	cin.ignore(100, '\n'); cin.clear(); cin.sync();
//
//	cout << "Enter the name for the South Division: ";
//	getline(cin, South.name);
//	file << South.name << " ";
//	for (int i = 0; i < 4; i++) {
//		cout << "Enter the sales of " << South.name << " division for quarter " << i + 1 << ": ";
//		cin >> South.qrt_sales[i];
//		file << South.qrt_sales[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}