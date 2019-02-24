#include <iostream>
using namespace std;

int done6(){
	int j = 10, k = 2, m = 4;
	j *= k;
	m *= k;
	k = j + m;
	return k;
}