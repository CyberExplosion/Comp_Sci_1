#include <iostream>
using namespace std;

int main_done17ch() {
	double calories_from_fat,
		fat_gram,
		calories,
		total_calories,
		percentage;

	cout << "Enter the number of fat in food (in gram): ";
	cin >> fat_gram;
	cout << "Enter the number of calories in food: ";
	cin >> calories;

	if (calories > 0) {
		if (fat_gram > 0) {
			calories_from_fat = fat_gram * 9.0;
			total_calories = calories + calories_from_fat;

			if (calories_from_fat < total_calories) {
				percentage = calories_from_fat / total_calories;

				if (percentage < 0.3 && percentage > 0) {
					cout << "The food is low in fat\n";
					cout << "Fat percentage comparing to food is: " << percentage << endl;
				}
				else {
					cout << "Fat percentage in food is: " << percentage << endl;
				}
			}
			else cout << "The number of calories from fat cannot be more than the total number of calories. Please check your input\n";
		}
		else cout << "The fat cannot be 0 or smaller\n";
	}
	else cout << "The calories cannot be 0 or smaller\n";
	
	return 0;
}