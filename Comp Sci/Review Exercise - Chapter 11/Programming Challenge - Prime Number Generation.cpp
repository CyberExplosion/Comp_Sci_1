#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class NotPrime {
private:
public:
	// Predicate, prime or not, divisor range from 1 to the number itself
	bool operator()(int num) {
		for (int i = 2; i < num; i++) {
			// Not prime, meaning remove
			if (num % i == 0) {
				return true;
			}
			else return false;
		}
	}

};

int main() {
	vector<int>prime_numbers;
	int test_num = 15;
	for (int i = 2; i <= test_num; i++) {
		prime_numbers.push_back(i);
	}
	auto remove_start = remove_if(begin(prime_numbers), end(prime_numbers), NotPrime());
	prime_numbers.erase(remove_start, end(prime_numbers));
	for (int val : prime_numbers) {
		cout << val << endl;
	}
	return 0;
}
