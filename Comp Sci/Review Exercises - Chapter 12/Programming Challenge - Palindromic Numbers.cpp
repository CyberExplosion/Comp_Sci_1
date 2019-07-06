#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int pow2;
	string num_str,
		reversed_num;
	
	for (int i = 0; i < 10000; i++) {
		num_str = to_string(i);
		reversed_num = num_str;
		reverse(reversed_num.begin(), reversed_num.end());
		// compare function return 0 for the same, which is false in conditional, therefore we reversed that with exclamation mark
		if (!(num_str.compare(reversed_num))) {
			pow2 = pow(i, 2);
			num_str = to_string(pow2);
			reversed_num = num_str;
			reverse(reversed_num.begin(), reversed_num.end());
			if (!(num_str.compare(reversed_num))) {
				cout << i << " has square " << pow2 << endl;
			}
		}
		else continue;
	}

	return 0;
}