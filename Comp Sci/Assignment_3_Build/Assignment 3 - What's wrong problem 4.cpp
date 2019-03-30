//Khoi Nguyen
//CS1, Section #0109
//Assignment #3, Problem 4
//Looking for problem in the programs given. All problems found will be commented. Re-wrote code included to show what I would add, remove, or rearrange them. Flip the comment block to test my re-written code.


/*
#include <iostream>
using namespace std;

int main()
{
	int count = 1, total; // total have to be initialized before being use in line 15 to add "count" into "total" itself.
	while (count <= 100)
	{
		total += count; // No way for count to go up. This would mean "count" will always smaller than 100, which end up in the loop continue forever.
	}
	cout << "The sum of the numbers 1 - 100 is ";
	cout << total << endl;
	return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
	int count = 1, total=0;
	while (count <= 100)
	{
		total += count;
		count++;
	}
	cout << "The sum of the numbers 1 - 100 is ";
	cout << total << endl;
	return 0;
}
*/