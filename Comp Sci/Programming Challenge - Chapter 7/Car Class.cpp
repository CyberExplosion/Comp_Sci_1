//#include <iostream>
//#include <string>
//using namespace std;
//
//class Car {
//private:
//	int year,
//		speed;
//	string make;
//public:
//	Car(int t_year, string t_make) :year(t_year), make(t_make), speed(0) {};
//	int getYear() {
//		return year;
//	}
//	int getSpeed() {
//		return speed;
//	}
//	string getMake() {
//		return make;
//	}
//	void accelerate() {
//		speed += 5;
//	}
//	void brake() {
//		speed -= 5;
//	}
//};
//
//int main() {
//	int year, speed;
//	string make;
//
//	cout << "Enter the year the car is made: ";
//	cin >> year;
//	cin.ignore(100, '\n'); cin.clear(); cin.sync();
//	cout << "Enter the name of the car maker: ";
//	getline(cin, make);
//
//	Car user(year, make);
//	for (int i = 0; i < 5; i++) {
//		user.accelerate();
//		cout << "The speed of the car now is: " << user.getSpeed() << endl;
//	}
//	cout << "The speed of the car after 5 acceleration: " << user.getSpeed() << endl;
//	for (int i = 0; i < 5; i++) {
//		user.brake();
//		cout << "The speed of the car now is: " << user.getSpeed() << endl;
//	}
//	cout << "The speed of the car after 5 brakes is: " << user.getSpeed() << endl;
//
//	return 0;
//}