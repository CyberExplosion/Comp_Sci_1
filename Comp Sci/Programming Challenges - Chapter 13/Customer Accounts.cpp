//This one is a hard one bois, but we finally got em
//
//
//#include <iostream>
//#include <string>
//#include <fstream>
//#include <vector>
//#include <sstream>
//#include <iomanip>
//using namespace std;
//
//struct Account {
//	string name;
//	string address;
//	string city,
//		state,
//		zip_code;
//	string telephone_number;
//	double balance;
//	string date_of_last_payment;
//};
////Return a vector filled of accounts
//vector<Account> inputFile(fstream&);
////Allow the user to enter new accounts
//void newAccount(vector<Account>&);
////Write the whole thing back to file
//ostringstream outputFile(vector<Account>&);
////Search for a particular customer's record and display it
//void searchAcc(vector<Account>&);
////Search for a particular customer's record and delete it
//void deleteAcc(vector<Account>&);
////Search for a particular customer's record and change it
//void changeAcc(vector<Account>&);
////Display the content of the entire file
//void display(vector<Account>&);
//
//int main() {
//	fstream file("customer accounts.txt", ios::in);
//	int choice;
//
//	if (file.fail()) {
//		cout << "The program cannot open the file\n";
//		return 1;
//	}
//	if (file.eof()) {
//		cout << "The file is empty\n";
//		return 2;
//	}
//	vector<Account>accounts_arr(inputFile(file));
//
//	cout << "Menu:\n";
//	cout << "1) Enter new records into the file: \n"
//		<< "2) Search for a particular customer's record and display it\n"
//		<< "3) Search for a particular customer's record and delete it\n"
//		<< "4) Search for a particular customer's record and change it\n"
//		<< "5) Display the contents of the entire file\n";
//	cout << "Enter the option you want to do: \n";
//	cin >> choice;
//	cin.ignore(100, '\n'); cin.clear(); cin.sync();
//	switch (choice) {
//	case 1:
//		newAccount(accounts_arr);
//		break;
//	case 2:
//		searchAcc(accounts_arr);
//		break;
//	case 3:
//		deleteAcc(accounts_arr);
//		break;
//	case 4:
//		changeAcc(accounts_arr);
//		break;
//	case 5:
//		display(accounts_arr);
//		break;
//	default:
//		cout << "Wrong option, program exit\n";
//		break;
//	}
//	//Write the whole thing back to file
//	//Close the file and open it in overwrite mode
//	file.close();
//	fstream oveer_written_file("customer accounts.txt", ios::out | ios::trunc);
//	oveer_written_file << outputFile(accounts_arr).str();
//	oveer_written_file.close();
//	return 0;
//}
//
////Filling the vector with accounts in the file
//vector<Account> inputFile(fstream& t_file) {
//	Account user;
//	vector<Account> arr_acc(0);
//	string num;
//	string white_space = "";
//
//	while (!t_file.eof()) {
//		getline(t_file, user.name, ',');
//		getline(t_file, user.address, ',');
//		getline(t_file, user.city, ',');
//		getline(t_file, user.state, ',');
//		getline(t_file, user.zip_code, ',');
//		getline(t_file, user.telephone_number, ',');
//		getline(t_file, num, ',');
//		//Use stod because the stream operator '>>' doesn't get rid of the ',' and thus it stays into the date
//		user.balance = stod(num);
//		getline(t_file, user.date_of_last_payment);
//		//Put into array
//		arr_acc.push_back(user);
//	}
//	//Reset the reference
//	t_file.seekg(0);
//	return arr_acc;
//}
//
//void newAccount(vector<Account>& acc_arr) {
//	Account acc_new;
//
//	cout << "Enter the name of the account: ";
//	getline(cin, acc_new.name);
//	cout << "Enter the address of the account: ";
//	getline(cin, acc_new.address);
//	cout << "Enter the city of the account: ";
//	getline(cin, acc_new.city);
//	cout << "Enter the state of the account: ";
//	getline(cin, acc_new.state);
//	cout << "Enter the ZIP code of the account: ";
//	getline(cin, acc_new.zip_code);
//	cout << "Enter the phone number of the account: ";
//	getline(cin, acc_new.telephone_number);
//	do {
//		cout << "Enter the account balance: ";
//		cin >> acc_new.balance;
//		cin.ignore(100, '\n'); cin.clear(); cin.sync();
//		if (acc_new.balance < 0) {
//			cout << "Balance number cannot be negative, pls try again\n";
//		}
//	} while (acc_new.balance < 0);
//	cout << "Enter the date of last payment: ";
//	getline(cin, acc_new.date_of_last_payment);
//	//Put back to vector
//	acc_arr.push_back(acc_new);
//}
//
////Return an ostringstream object that return to file
//ostringstream outputFile(vector<Account>& accounts) {
//	ostringstream out;
//	string stream;
//	for (Account val : accounts) {
//		out << val.name << "," << val.address << "," << val.city << "," << val.state << "," << val.zip_code << "," << val.telephone_number << "," << val.balance << "," << val.date_of_last_payment << '\n';
//	}
//	stream = out.str();
//	//Remove the last '\n' so that the file ends without a new line
//	stream.pop_back();
//	//Return the stream object back to ostringstream
//	out.str(stream);
//	return out;
//}
//
//void searchAcc(vector<Account>& list) {
//	string search;
//	int found;
//	bool matche = false;
//
//	cout << "Enter thing to search for: ";
//	getline(cin, search);
//	cout << fixed << showpoint << setprecision(2);
//	cout << "Result: \n";
//	cout << left;
//	for (int i = 0; i < list.size(); i++) {
//		found = list[i].name.find(search);
//		if (found == string::npos) {
//			found = list[i].address.find(search);
//			if (found == string::npos) {
//				found = list[i].city.find(search);
//				if (found == string::npos) {
//					found = list[i].state.find(search);
//					if (found == string::npos) {
//						found = list[i].zip_code.find(search);
//						if (found == string::npos) {
//							found = list[i].telephone_number.find(search);
//							if (found == string::npos) {
//								found = list[i].date_of_last_payment.find(search);
//							}
//						}
//					}
//				}
//			}
//		}
//		else {
//			cout << i+1 << ") ";
//			cout << setw(6) << "Name: " << list[i].name << endl
//				<< setw(6) << "Address: " << list[i].address << ", " << list[i].city << ", " << list[i].state << ", " << list[i].zip_code << endl
//				<< setw(6) << "Telephone number: " << list[i].telephone_number << endl
//				<< setw(6) << "Balance: " << list[i].balance << endl
//				<< setw(6) << "Date of last payment: " << list[i].date_of_last_payment << endl;
//		}
//	}
//}
//
//void deleteAcc(vector<Account>& arr) {
//	string t_name,
//		t_address,
//		t_zip;
//	double balance;
//	bool match = false;
//	
//	cout << "Enter the name of the account you want to delete: \n";
//	getline(cin, t_name);
//	cout << "Enter the address of the account you want to delete: \n";
//	getline(cin, t_address);
//	cout << "Enter the ZIP code of the account you want to delete: \n";
//	getline(cin, t_zip);
//	for (int i = 0; i < arr.size(); i++) {
//		if (arr[i].name == t_name && arr[i].address == t_address && arr[i].zip_code == t_zip) {
//			cout << "Enter your account balance: \n";
//			cin >> balance;
//			cin.ignore(100, '\n'); cin.clear(); cin.sync();
//			if (balance == arr[i].balance) {
//				match = true;
//				arr.erase(arr.begin() + i);
//				cout << i << endl;
//				cout << "Account has been erased\n";
//			}
//		}
//		//Get the iterator, we use ampersand '&' to get the address of the value, then minus it by the address of the first value in the array to get the position we are at right now
//	}
//	if (match == false) {
//		cout << "There are no account has the properties stated, nothing has been deleted\n";
//	}
//}
//
//void changeAcc(vector<Account>& vec) {
//	string name,
//		address;
//	int choice;
//	char ch;
//
//	cout << "Enter the name of the account: ";
//	getline(cin, name);
//	cout << "Enter the address of the account: ";
//	getline(cin, address);
//	
//	//Reference for val so that you con modified item
//	for (Account &val : vec) {
//		if (val.name == name && val.address == address) {
//			do {
//				cout << "Choose which you want to change: \n";
//				cout << "1) Name\n"
//					<< "2) Address\n"
//					<< "3) City, State and ZIP\n"
//					<< "4) Telephone Number\n"
//					<< "5) Account Balance\n"
//					<< "6) Date of last payment\n"
//					<< "Enter anything else to change nothing\n";
//				cin >> choice;
//				cin.ignore(100, '\n'); cin.clear(); cin.sync();
//				switch (choice) {
//				case 1:
//					cout << "Enter new name: ";
//					getline(cin, val.name);
//					break;
//				case 2:
//					cout << "Enter new Address: ";
//					getline(cin, val.address);
//					break;
//				case 3:
//					cout << "Enter new City: ";
//					getline(cin, val.city);
//					cout << "Enter new State: ";
//					getline(cin, val.state);
//					cout << "Enter new ZIP Code: ";
//					getline(cin, val.zip_code);
//					break;
//				case 4:
//					cout << "Enter new telephone number: ";
//					getline(cin, val.telephone_number);
//					break;
//				case 5:
//					cout << "Enter new account balance: ";
//					cin >> val.balance;
//					cin.ignore(100, '\n'); cin.clear(); cin.sync();
//					break;
//				case 6:
//					cout << "Enter new Date of last payment: ";
//					getline(cin, val.date_of_last_payment);
//					break;
//				default:
//					break;
//				}
//				cout << "--------------------------\n";
//				cout << "Do you want to change anything else (Y/N)?";
//				cin >> ch;
//				cin.ignore(100, '\n'); cin.clear(); cin.sync();
//			} while (toupper(ch) == 'Y');
//		}
//	}
//}
//
//void display(vector<Account>& disp) {
//	cout << showpoint << fixed << setprecision(2);
//	for (int i = 0; i < disp.size(); i++) {
//		cout << i + 1 << ") ";
//		cout << setw(6) << "Name: " << disp[i].name << endl
//			<< setw(6) << "Address: " << disp[i].address << ", " << disp[i].city << ", " << disp[i].state << ", " << disp[i].zip_code << endl
//			<< setw(6) << "Telephone Number: " << disp[i].telephone_number << endl
//			<< setw(6) << "Account Balance: " << disp[i].balance << endl
//			<< setw(6) << "Date of last payment: " << disp[i].date_of_last_payment << endl << endl;
//	}
//}