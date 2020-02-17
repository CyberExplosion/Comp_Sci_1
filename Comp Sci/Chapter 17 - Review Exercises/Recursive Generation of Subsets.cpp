//#include <iostream>
//#include <vector>
//#include <list>
//using namespace	std;
//
//list<vector<int>>subsetGenerator(int ceiling_num) {
//	if (ceiling_num == 0) {
//		vector<int>ze_end(0);
//		list<vector<int>> foo;
//		foo.push_back(ze_end);
//		return foo;
//	}
//
//	list<vector<int>>foo, result;
//	vector<int> bar;
//	//First we add the ceiling number to the list
//	bar.push_back(ceiling_num);
//	result.push_back(bar);
//
//	//Then we add original list to a temp list
//	list<vector<int>>temp = subsetGenerator(ceiling_num - 1);
//	result = temp;	//store the original cause we gonna modify the temp
//
//	//Using temp, we add the ceiling number in each subsets and add it to result
//	while (!temp.empty()) {
//		temp.back().push_back(ceiling_num);
//		result.push_back(temp.back());
//		temp.pop_back();
//	}
//
//	//Now the result has original, the ceiling number and the modified old list. That's ever subsets
//	return result;
//}
//
//int main() {
//	list<vector<int>>test = subsetGenerator(4);
//	while (!test.empty()) {
//		for (int val : test.back()) {
//			cout << val << " ";
//		}
//		cout << endl;
//		test.pop_back();
//	}
//}