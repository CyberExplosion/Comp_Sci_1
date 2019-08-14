#include <iostream>
using namespace std;

class PatientAccount;

class Pharmacy {
private:
	const double PARAXETAMON = 50.5,
		KILLER_X = 20.25,
		ANTIBIOTIC = 15,
		COLD = 10.5,
		CATALYST = 5.75;
	double charges;
public:
	Pharmacy() : charges(0) {};
	// PARAXETAMON = 50.5,
	//	KILLER_X = 20.25,
	//	ANTIBIOTIC = 15,
	//	COLD = 10.5,
	//	CATALYST = 5.75
	// using number from 1-5 to choose a product
	void drug(int, PatientAccount& acc);
};

class Surgery {
private:
	const double HEAD = 500,
		LUNGS = 625.75,
		INTESTINE = 750.25,
		BALLS = 250.89,
		COCK = 969.69;
	double charges;
public:
	Surgery() : charges(0) {};
	/*1 for HEAD, 2 for LUNGS, 3 for INTESTINES, 4 and 5 for BALLS and COCKS respectively*/
	void operation(int, PatientAccount& acc);
	void money(PatientAccount& acc);
};

class PatientAccount {
private:
	double charges;
	int days_spent;
	static const double daily_rate;
public:
	PatientAccount() : days_spent(0), charges(0) {};
	PatientAccount(int days);
	double total_money() {
		return charges + (days_spent * daily_rate);
	}
	void setDays(int day) {
		days_spent = day;
	}
	friend void Surgery::money(PatientAccount& acc);
	friend void Pharmacy::drug(int, PatientAccount& acc);
};

const double PatientAccount::daily_rate = 35.5;

int main() {
	int choice,
		days;
	PatientAccount p1;
	Surgery s1;
	Pharmacy phar1;
	char ch;

	cout << "Menu:\n"
		<< "1) Head\n"
		<< "2) Lungs\n"
		<< "3) Intestine\n"
		<< "4) Balls\n"
		<< "5) Cock\n";
	cout << "Please choose your type of surgery: ";
	cin >> choice;
	switch (choice) {
	case 1:
		s1.operation(1, p1);
		break;
	case 2:
		s1.operation(2, p1);
		break;
	case 3:
		s1.operation(3, p1);
		break;
	case 4:
		s1.operation(4, p1);
		break;
	case 5:
		s1.operation(5, p1);
		break;
	default:
		break;
	}
	// PARAXETAMON = 50.5,
//	KILLER_X = 20.25,
//	ANTIBIOTIC = 15,
//	COLD = 10.5,
//	CATALYST = 5.75
// using number from 1-5 to choose a product
	cout << "--------------------------------------------\n";
	cout << "Medication: \n"
		<< "1) Paracetamol\n"
		<< "2) Killer X\n"
		<< "3) Antibiotic\n"
		<< "4) Cold\n"
		<< "5) Catalyst\n";
	do {
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice) {
		case 1:
			phar1.drug(1, p1);
			break;
		case 2:
			phar1.drug(2, p1);
			break;
		case 3:
			phar1.drug(3, p1);
			break;
		case 4:
			phar1.drug(4, p1);
			break;
		case 5:
			phar1.drug(5, p1);
			break;
		default:
			break;
		}
		cout << "Do you want to choose another medication? (Y/N): ";
		cin >> ch;
	} while (toupper(ch) == 'Y');

	cout << "Enter the number of days the patients has been hospitalized: ";
	cin >> days;
	p1.setDays(days);
	cout << "The total charges of the patient is: " << p1.total_money() << endl;
	return 0;
}

PatientAccount::PatientAccount(int days) {
	if (days <= 0) {
		PatientAccount();
	}
	else {
		days_spent = days;
	}
}

void Surgery::money(PatientAccount& acc) {
	acc.charges += this->charges;
}

void Surgery::operation(int ops, PatientAccount& acc) {
	switch (ops) {
	case 1:
		charges += HEAD;
		break;
	case 2:
		charges += LUNGS;
		break;
	case 3:
		charges += INTESTINE;
		break;
	case 4:
		charges += BALLS;
		break;
	case 5:
		charges += COCK;
		break;
	default:
		break;
	}
	money(acc);
}

void Pharmacy::drug(int choice, PatientAccount& acc) {
	switch (choice) {
	case 1:
		charges += PARAXETAMON;
		break;
	case 2:
		charges += KILLER_X;
		break;
	case 3:
		charges += ANTIBIOTIC;
		break;
	case 4: 
		charges += COLD;
		break;
	case 5:
		charges += CATALYST;
		break;
	default:
		break;
	}
	acc.charges += this->charges;
}
