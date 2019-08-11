////Added Challenge 9
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//struct MovieData {
//	string title,
//		director;
//	int year_released,
//		running_time_minutes;
//	double production_cost,
//		first_year_revenue;
//	MovieData(string t, string d, int y, int r, double p,double f) {
//		title = t;
//		director = d;
//		year_released = y;
//		running_time_minutes = r;
//		production_cost = p;
//		first_year_revenue = f;
//	}
//	void formattedPrint();
//};
//
//int main() {
//	string title,
//		director;
//	int year_released,
//		running_time_minutes;
//	double production_cost,
//		first_year_revenues;
//
//	cout << "Enter the title of the movie: ";
//	getline(cin, title);
//	cout << "Enter the name of the director: ";
//	getline(cin, director);
//	cout << "Enter the year the movie was released: ";
//	cin >> year_released;
//	cout << "Enter the running time of the movie in minutes: ";
//	cin >> running_time_minutes;
//	cout << "Enter the production cost of the movie: ";
//	cin >> production_cost;
//	cout << "Enter the first year revenue of the movie: ";
//	cin >> first_year_revenues;
//
//	MovieData user(title, director, year_released, running_time_minutes, production_cost, first_year_revenues);
//	user.formattedPrint();
//	return 0;
//}
//
//void MovieData::formattedPrint() {
//	cout << title << endl
//		<< director << endl
//		<< year_released << endl
//		<< running_time_minutes << endl
//		<< production_cost << endl
//		<< first_year_revenue << endl;
//}
