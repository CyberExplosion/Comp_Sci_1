//#include <iostream>
//#include <vector>
//#include <list>
//using namespace std;
//
//int main() {
//	list<vector<int>>listOfSubsets;
//	//Suppose that you created the list of subsets of 1,2,3
//	vector<int>list1 = { 1 };
//	vector<int>list2 = { 2 };
//	vector<int>list3 = { 3 };
//	vector<int>list4 = { 1,2 };
//	vector<int>list5 = { 1,3 };
//	vector<int>list6 = { 2,3 };
//	vector<int>list7 = { 1,2,3 };
//
//	listOfSubsets.push_back(list1);
//	listOfSubsets.push_back(list2);
//	listOfSubsets.push_back(list3);
//	listOfSubsets.push_back(list4);
//	listOfSubsets.push_back(list5);
//	listOfSubsets.push_back(list6);
//	listOfSubsets.push_back(list7);
//	//To make a list of 4, add both the vectors and the number 4 to each vector to an empty list
//
//	//First add the new value 4 into each element in original list and put it in a temp list
//	list<vector<int>>temp;
//	list<vector<int>>original = listOfSubsets;
//	int k_value = 4;
//
//
//	//Add an individual value 4 into the list since each number is considered a separate subset also
//	vector<int>only = { k_value };
//	temp.push_back(only);
//
//	//Next we add the original list to temp so that we have both the new list and the original list under one name
//	while (!original.empty()) {
//		temp.push_back(original.front());
//		original.pop_front();
//	}
//
//	while (!listOfSubsets.empty()) {
//		vector<int>vec = listOfSubsets.front();
//		vec.push_back(k_value);
//		temp.push_back(vec);
//		listOfSubsets.pop_front();
//	}
//
//	//Finally sets the List under the old name
//	listOfSubsets = temp;
//
//	//Display results
//	while (!listOfSubsets.empty()) {
//		for (int val : listOfSubsets.front()) {
//			cout << val << " ";
//		}
//		cout << endl;
//		listOfSubsets.pop_front();
//	}
//}