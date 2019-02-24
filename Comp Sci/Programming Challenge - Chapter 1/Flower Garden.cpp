/*Pseudo Code
Input:
	Disp: The cost of the soil : soil
	Disp: The cost of flower seeds: seed
	Disp: The cost of the fence : fence
Processing:
	Total cost is equal to the sum of soil, seed and fence
	soil+seed+fence
Output: 
	Disp: Total cost is "soil+seed+fence"
end
-- Variable Used:
	double soil, seed,fence
*/

#include <iostream>
using namespace std;

int main() {
	double soil, seed, fence;
	//Input
	cout << "The cost of the soil: ";
	cin >> soil;
	cout << "The cost of the flower seeds: ";
	cin >> seed;
	cout << "The cost of the fence: ";
	cin >> fence;
		//Processing
	//Output
	cout << "-------------------------------------" << endl;
	cout << "Total cost is ($): " << soil + seed + fence << endl;
	return 0;
}