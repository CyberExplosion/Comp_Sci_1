//#include <vector>
//#include <iostream>
//using namespace std;
//
//vector<int>pascalTriangleNextRow(vector<int>row) {
//	int sum;
//	vector<int>result(1, 1);
//
//	for (int i = 1; i < row.size(); i++) {
//		sum = row[i] + row[i - 1];
//		result.push_back(sum);
//	}
//	result.push_back(1);
//	return result;
//}
//
//int main() {
//	vector<int>res;
//	vector<int>num = { 1 };
//	res = pascalTriangleNextRow(num);
//	for (int val : res) {
//		cout << val << "  ";
//	}
//	cout << endl;
//	for (int i = 0; i < 6; i++) {
//		res = pascalTriangleNextRow(res);
//		for (int val : res) {
//			cout << val << "  ";
//		}
//		cout << endl;
//	}
//}