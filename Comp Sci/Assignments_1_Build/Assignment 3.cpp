//Khoi Nguyen
//CS 1, Section #0109
//Assignment #1
//A program that produces a simple text-based adventure game called Lost Fortune.



#include <iostream>
using namespace std;

int main_done3() {
	/*Pseudo Code
	Input:
		number of explorer
		number of explorer lost in battle
		GOLD = 750
	Processing:
		number of  survivor = number of explorer - number of explorer lost in battle
		{gold for player = remainder }
			\
			  {remainder = gold % survivors}
	Output:
		explorers
		lost
		survivors
		gold for player
end
-- Variable Use: explorers, explorer_lost, survivors, gold for player, gold	
	*/
	int explorers,
		explorers_lost,
		survivors,
		player_gold;
	const int GOLD = 750;

	cout << "Welcome to the Lost Fortune!\n\n";
	cout << "Please answer the following questions for your personalized adventure: \n\n";
	cout << "Enter the number of Explorers:\n";
	cin >> explorers;
	cout << endl;
	cout << "Enter the number of Explorers Lost in Battle:\n";
	cin >> explorers_lost;
	cout << endl;
	
	survivors = explorers - explorers_lost;
	player_gold = GOLD % survivors; // player gold is the remainder after the gold is divided equally to each survivors

	cout << "You bravely led " << explorers << " adventures on a quest for gold.\n";
	cout << "The group fought a band of ogres and lost " << explorers_lost << " members.\n";
	cout << "Only " << survivors << " survived.\n\n";
	cout << "The party was about to give up when they stumbled upon the\n" 
		<< "buried fortune of " << GOLD << " gold pieces. The group split the loot evenly\n"
		<< "and as the quest leader you kept the extra " << player_gold << " gold pieces.\n";

	return 0;
}