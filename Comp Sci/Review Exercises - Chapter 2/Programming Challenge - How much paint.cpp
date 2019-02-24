#include <iostream>
using namespace std;

int main() {
	float paint_cover_rate = 340.0,
		coat_amount = 2.0,
		coat_height = 6.0,
		coat_length = 100.0;

	cout << "The ammount of paint need: " << (coat_amount*(coat_height*coat_length)) / paint_cover_rate << " gallons\n";
	return 0;

}