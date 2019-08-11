//#include <iostream>
//using namespace std;
//
//class Population {
//private:
//	int population,
//		annual_birth_num,
//		annual_death_num;
//public:
//	Population(int, int, int);
//	void setPopulation(int),
//		setBirths(int),
//		setDeaths(int);
//	double getBirthRate(),
//		getDeathRate();
//};
//
//int main() {
//	int pop,
//		birth,
//		death;
//
//	cout << "Enter the population for the geographic area: ";
//	cin >> pop;
//	cout << "Enter the number of births in the area: ";
//	cin >> birth;
//	cout << "Enter the number of deaths in the area: ";
//	cin >> death;
//
//	Population user(pop, birth, death);
//	cout << "The birth rate: " << user.getBirthRate() << endl
//		<< "The death rate: " << user.getDeathRate() << endl;
//	return 0;
//}
//
//Population::Population(int pop, int birth, int death) {
//	if (pop < 2) {
//		population = 2;
//	}
//	else {
//		population = pop;
//	}
//	if (birth < 0 || death < 0) {
//		annual_birth_num = 0;
//		annual_death_num = 0;
//	}
//	else {
//		annual_birth_num = birth;
//		annual_death_num = death;
//	}
//}
//
//void Population::setPopulation(int population) {
//	if (population < 2) {
//		this->population = 2;
//	}
//	else {
//		this->population = population;
//	}
//}
//
//void Population::setDeaths(int deaths) {
//	if (deaths < 0) {
//		annual_death_num = 0;
//	}
//	else {
//		annual_death_num = deaths;
//	}
//}
//
//double Population::getBirthRate() {
//	return (double)annual_birth_num / population;
//}
//
//double Population::getDeathRate() {
//	return (double)annual_death_num / population;
//}
//
//void Population::setBirths(int births) {
//	if (births < 0) {
//		annual_birth_num = 0;
//	}
//	else {
//		annual_birth_num = births;
//	}
//}
