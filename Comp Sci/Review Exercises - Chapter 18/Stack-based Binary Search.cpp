#include <iostream>
#include <stack>
using namespace std;

class Range {
	int start;
	int end;
	friend int bSearch(int arr[], int start, int end);
public:
	Range(int t_s, int t_e) : start(t_s), end(t_e) {};
	int getStart() {
		return start;
	}
	int getEnd() {
		return end;
	}
	int getSize() {
		if (start <= end)
			return end - start + 1;
		else
			return -1;
	}
};

/*************************
Create a stack
Push a range from 0 to size()-1 to the stack
	While the stack is not empty
		Pop the range out of the stack
		Check if the middle value is the target
		If not then split the range into two smaller and push them back onto the stack
		Don't push back to stack if the range is just 1 (only 1 value left)
**************************/
int bSearch(int arr[], int start, int end, int target) {
	stack<Range> bStack;

	//Push to stack
	bStack.push(Range(start, end));
	while (!bStack.empty()) {
		Range rag = bStack.top();
		bStack.pop();
		//Check middle value
		if (rag.getStart() > rag.getEnd()) {
			return -1;
		}
		else {
			int middle = (rag.getStart() + rag.getEnd()) / 2;
			if (arr[middle] == target)
				return middle;
			Range smol(rag.getStart(), middle - 1);
			Range smol2(middle + 1, rag.getEnd());
			if (smol.getSize() >= 1)
				bStack.push(smol);
			if (smol2.getSize() >= 1)
				bStack.push(smol2);
		}
	}
}

int main() {
	int arr[5] = { 10,20,30,69,50 };
	int target;
	cout << "Enter target: ";
	cin >> target;
	cout << "The position of the target is: ";
	if (!bSearch(arr, 0, 4, target)) {
		cout << "Not found\n";
	}
	else {
		cout << bSearch(arr, 0, 4, target) << "\n";
		cout << "Prove: " << arr[bSearch(arr, 0, 4, target)] << endl;
	}
}