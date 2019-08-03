//Fuck Binary Files
// Screw program 16 too cause it requires you to complete this @@

//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//#include <iomanip>
//using namespace std;
//
//int main() {
//	struct Item {
//		//If you use binary data, string is the enemy, use vector of characters when you think you will have to deal with binary data
//		vector<char> description;
//		int quantity;
//		double whole_cost;
//		double retail_cost;
//		vector<char> date;
//	};
//	fstream file("inventory.txt", ios::in | ios::out | ios::app | ios::binary);
//	int choice;
//	vector<Item>buffer;
//	int item_index = 0;
//
//	if (file.fail()) {
//		cout << "File opened failed successfully\n";
//		return 1;
//	}
//
//	Item add,
//		display,
//		change;
//	string description,
//		date;
//
//	cout << "1) Add new records to the file.\n"
//		<< "2) Display any records in the file.\n"
//		<< "3) Change any record in the file.\n" << endl;
//	cout << "Enter what you want to do: ";
//	cin >> choice;
//	cin.ignore(100, '\n'); cin.clear(); cin.sync();
//	switch (choice) {
//	case 1:
//		cout << "Enter new item description: ";
//		getline(cin, description);
//		//Insert format: .insert(vector position iterator, another vector or string or whatever iterator for begin, another iterator for the end)
//		add.description.insert(add.description.begin(),description.begin(), description.end());
//		cout << "Enter the quantity of item: ";
//		cin >> add.quantity;
//		cout << "Enter the wholesale cost: ";
//		cin >> add.whole_cost;
//		cout << "Enter the retail cost: ";
//		cin >> add.retail_cost;
//		cout << "Enter the date add to inventory: ";
//		cin.ignore(100, '\n'); cin.clear(); cin.sync();
//		getline(cin, date);
//		add.date.insert(add.date.begin(),date.begin(), date.end());
//		//Writing structure meaning that only the instance of structure is counted
//		//Write to vector
//		buffer.push_back(add);
//		//Write structure as binary data to file
//		file.write((char*)(&buffer), sizeof(buffer));
//		file.close();
//		break;
//	case 2:
//		 item_index = 0;
//		cout << "Displaying: \n";
//		//Read all the data in the file into the vector
//		while (!file.fail()) {
//			//Have to insert the thing to work
//			file.read((&display.description[0]), sizeof(display.description));
//			file.read((char*)(&display.quantity), sizeof(display.quantity));
//			file.read((char*)(&display.whole_cost), sizeof(display.whole_cost));
//			file.read((char*)(&display.retail_cost), sizeof(display.retail_cost));
//			file.read((&display.date[0]), sizeof(display.date));
//			buffer.push_back(display);
//		}
//
//		//if (sizeof(buffer[0]) != 0) {
//		//	cout << sizeof(buffer[0]);
//		//	cout << endl << buffer.size();
//		//	num_item = sizeof(buffer) / sizeof(buffer[0]);
//		//}
//		//else {
//		//	num_item = 0;
//		//}
//		cout << "There are " << buffer.size() << " items in the inventory\n";
//		if (buffer.size() > 0) {
//			cout << "Enter the index of the item you wanna check (first item is 0): \n";
//			cin >> item_index;
//		}
//		if (buffer.size() >= 0 && item_index < buffer.size()) {
//			cout << "--------------------------------------\n";
//			cout << "Item description: ";
//			for (char val : buffer[item_index].description) {
//				cout << val;
//			}
//			cout << endl;
//			cout << "Quantity on hand: " << buffer[item_index].quantity << endl;
//			cout << "Wholesale Cost: $" << buffer[item_index].whole_cost << endl;
//			cout << "Retail Cost: $" << buffer[item_index].retail_cost << endl;
//			cout << "Date added to inventory: ";
//			for (char val : buffer[item_index].date) {
//				cout << val;
//			}
//		}
//		else {
//			cout << "The index exceed the number of item available\n";
//			return 2;
//		}
//		file.close();
//		break;
//	//case 3:
//	//	item_index = 0;
//
//	//	while (file.read((char*)(&change), sizeof(change))) {
//	//		buffer.push_back(change);
//	//	}
//	//	/*if (sizeof(buffer[0]) != 0) {
//	//		num_item = sizeof(buffer) / sizeof(buffer[0]);
//	//	}
//	//	else {
//	//		num_item = 0;
//	//	}*/
//	//	cout << "There are " << buffer.size() << " items in the inventory\n";
//	//	cout << "Displaying\n";
//	//	cout << left;
//	//	cout << "Item Description" << setw(10) << "Quantity" << setw(15) << "Wholesale Cost" << setw(15) << "Retail Cost" << setw(30) << "Date added to inventory\n";
//	//	for (Item val : buffer) {
//	//		cout << "Item #" << &val - &buffer[0] << ": \n";
//	//		cout << val.description << setw(10) << val.quantity << setw(15) << val.whole_cost << setw(15) << val.retail_cost << setw(30) << val.date << endl;
//	//	}
//	//	cout << right;
//	//	cout << "---------------------------\n";
//	//	cout << "Enter the index of the record you wanna change\n";
//	//	cin >> item_index;
//	//	if (item_index >= 0 && item_index < buffer.size()) {
//	//		cout << "Item index #" << item_index << "chosen\n";
//	//		cout << "Enter new item description: ";
//	//		getline(cin, buffer[item_index].description);
//	//		cout << "Enter new Quantity: ";
//	//		cin >> buffer[item_index].quantity;
//	//		cout << "Enter new Wholesale cost: $";
//	//		cin >> buffer[item_index].whole_cost;
//	//		cout << "Enter new Retail Cost: $";
//	//		cin >> buffer[item_index].retail_cost;
//	//		cout << "Enter new Date added to inventory: ";
//	//		cin.ignore(100, '\n'); cin.clear(); cin.sync();
//	//		getline(cin, buffer[item_index].date);
//	//		file.write((char*)(&buffer), sizeof(buffer));
//	//	}
//	//	else {
//	//		cout << "The index entered for option 3 is wrong\n";
//	//		return 3;
//	//	}
//	//	break;
//	default:
//		cout << "Wrong option dummy\n";
//		break;
//	}
//
//	return 0;
//}