#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

bool funcRead(ifstream);
int returnValue(vector<vector<int>>, char);

int main_done6() {
	vector<vector<char>> weather(3, vector<char>(30));
	return 0;
}

bool funcRead(ifstream inputFile) {
	inputFile.open("weather.txt");
	if (inputFile.fail()) {
		return false;
	}
	else return true;
}

int returnValue(vector<vector<char>> vector, char weather_char) {
	int count{ 0 };
	for (int i = 0; i < vector.size(); i++) {
		for (int k = 0; k < vector[i].size(); i++) {
			if (toupper(vector[i][k]) == 'R'&& toupper(weather_char)=='R') {
				count++;
			}
			if (toupper(vector[i][k]) == 'C'&&toupper(weather_char)=='C') {
				count++;
			}
			if (toupper(vector[i][k]) == 'S'&&toupper(weather_char)=='S'){
				count++;
			}
		}
	}
	return count;
}