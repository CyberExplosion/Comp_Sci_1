//Khoi Nguyen
//CS1, Section #0109
//Assignment #6, Problem #1
//Summary: This program allows user to manipulate the string entered by user

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <ctime>
using namespace std;

int countConsonants(const string);
//void word_count_old();
int word_count(const string);
void jumbleString(const string);
int Menu();
void reversed_string(string,string&);
void inversed_string(string&);
void upperCase(string&);

int main() {
	/*Pseudo Code:
	Too many things going on, look at the functions pseudo code for more infos
	*/
	string user_string,
// String that will be our base to work on
		working_string,
		string_for_reversed;
	bool exit = false;
	cout << "Enter a string: ";
	getline(cin, user_string);
	working_string.assign(user_string);
	do {
		switch (Menu()) {
		case 1:
			inversed_string(working_string);
			cout << "String inverse done\n" << endl;
			break;
		case 2:
			string_for_reversed.assign(working_string);
			reversed_string(string_for_reversed, working_string);
			cout << "String reverse done\n" << endl;
			break;
		case 3:
			upperCase(working_string);
			cout << "String is now uppercase.\n" << endl;
			break;
		case 4:
			jumbleString(working_string);
			break;
		case 5:
			cout << "The number of words in this string is " << word_count(working_string) << endl;
			break;
		case 6:
			cout << "The number of consonants in the string is " << countConsonants(working_string) << endl;
			break;
		case 7:
			cin.ignore(100, '\n'); cin.clear(); cin.sync();
			cout << "Enter a new string: ";
			getline(cin, user_string);
			working_string.assign(user_string);
			break;
		case 8:
			cout << working_string;
			break;
		case 9:
			exit = true;
			break;
		default:
			cout << "Invalid Input\n\n";
		}
	} while (exit == false);

	return 0;
}
// String need to use the ampersand sign
/************************
FUNCTION NAME: inversed_string
INPUT: a string (address)
OUTPUT: the same string that is inversed, lowercase to uppercase, uppercase to lowercase
DESCRIPTION: The function goes through every letter in the string, walking through 2 main if-statements. If the letter is uppercase then change the same letter in that position to lowercase. Same thing happen if the letter is lowercase.
************************/
void inversed_string(string& inversed) {

	for (int i = 0; i < inversed.size(); i++) {
		if (isupper(inversed[i])) {
			inversed[i] = tolower(inversed[i]);
		}
		else if (islower(inversed[i])) {
			inversed[i] = toupper(inversed[i]);
		}
	}
	return;
}
/***************************
FUNCTION NAME: reversed_string
INPUT: an original
***************************/
void reversed_string(const string original,string& reversed) {

	for (int i = 0; i < original.length(); i++) {
		reversed[i] = original[(original.length() - 1) - i];
	}

return;
}

//void word_count_old() {
//	string ex = " h,  i  m. ";
//	bool space_follow_letter = false,
//		letter_follow_space = false;
//	int word_count = 0;
//
//	for (int i = 0; i < ex.size() - 1; i++) {
//		// Case 1 with string begin with a space: "_I" and "_I_". This will count a word only if they have a space right before
//		if ((isspace(ex[i]) || !isalnum(ex[i + 1])  ) && !letter_follow_space) {
//			space_follow_letter = true;
//			if (isalnum(ex[i + 1])) {
//				word_count++;
//			}
//		}
//		// Case 2 with string not begin with a space: "I_". This will count a word only if they have a space follow right after
//		if ((isalnum(ex[i])) && !space_follow_letter) {
//			letter_follow_space = true;
//			if (isspace(ex[i + 1]) && !(isalnum(ex[i + 1]))) {
//				word_count++;
//			}
//		}
//		/****
//		Count for the word in the end of string of this case that does not follow with a space. Example: "Hello World" --> This will count only for 1 word if the statement below is not made. However: "Hello World_", with a space after "Word" will make the statement below unnecessary.
//		This also work in case if there are only 1 word with no space inside the string. Ex: "Hello" and "2015"
//		****/
//		// i == string.size()-1-1 --> This is to check if the loop has reached the end. Since we set the condition the loop to work while "i < string.size()-1", the last loop will have "i" equal to "string.size()-1-1"
//		// isalpha(ex[i + 1]) --> This is to make sure the last position in the string is not a space. This if-case is only for situation where the last character in the string is a character
//		// letter_follow_space --> This is to make sure the statement only run when the 2nd case of string is presented, which this is what the whole thing is for
//		if (i == ex.size() - 1 - 1 && !(isalnum(ex[i + 1])) && letter_follow_space) {
//			word_count++;
//		}
//
//		// Case 3 with string is numeric???????
//
//	}
//
//	cout << "The number of word in this string is: " << word_count << endl;
//}

int word_count(const string str) {
	int word_num = 0;
	// Flag for when a word appear
	bool word_flag = false;
	
	for (int i = 0; i < str.size(); i++) {
		if (isspace(str[i])) {
			// Reset the flag to false after meet with a space
			word_flag = false;
			continue;
		}
		// Check if the flag is false or not, if there the flag is false, which mean there are no word being count right now, then count the next word
		if (isalnum(str[i]) && word_flag == false) {
			// Set the flag to true, indicate that the current word is being counted
			word_flag = true;
			word_num++;
		}
	}
	return word_num;
}

int countConsonants(const string consonants) {
	int num_consonants = 0;

	for (int i = 0; i < consonants.size(); i++) {
		// Run only if the letter in the string is alphabetic
		if (isalpha(consonants[i])) {
			switch (toupper(consonants[i])) {
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				break;
			default:
				num_consonants++;
			}
		}
	}
	return num_consonants;
}

void jumbleString(const string jumbled) {
	int random_num;
	bool no_identical_num = false;

	srand(time(0));
	
	// Declare a dynamic memory array, this is the only way to declare an array with variable as size
	int* unavailable_nums = new int[jumbled.length()];
	
	// Populate the array with -1 as default value
	for (int j = 0; j < jumbled.length(); j++) {
		unavailable_nums[j] = -1;
	}

	for (int i = 0; i < jumbled.length(); i++) {
		// Keep looking for different random number if there is already one in the unavailable array
		do {
			random_num = rand() % jumbled.length();
			for (int k = 0; k < jumbled.length(); k++) {
				// Check if the random number we got is already in the array or not
				if (random_num != unavailable_nums[k]) {
					// Set the flag to step out of the loop
					no_identical_num = true;
				}
				else {
					// If there is one identical, set the flag and break the loop so the flag won't get reset on the next loop
					no_identical_num = false;
					// The break will force to end the loop, forcing it to go back to line 109 and create another random number, one that is not identical to what already in the unavailable_array
					break;
				}
			}
		} while (no_identical_num == false);
		// Assign that random number to the unavailable array
		unavailable_nums[i] = random_num;
	}
	// Now we the array "unavailable_num" should be full, with number from 1 up to the size being put in random location.
	// Those number then can be used as location number for each character in the original string. Because those number are random, the location in turn will also be
	for (int m = 0; m < jumbled.length(); m++) {
		cout << jumbled[unavailable_nums[m]];
	}

	// Free the memory
	delete[] unavailable_nums;
	unavailable_nums = nullptr;
}

int Menu() {
	int choice;
	cout << endl;
	cout << "USE THIS MENU TO MANIPULATE YOUR STRING" << endl;
	cout << "---------------------------------------" << endl;
	cout << "1) Inverse String" << endl;
	cout << "2) Reverse String" << endl;
	cout << "3) To Uppercase" << endl;
	cout << "4) Jumble String" << endl;
	cout << "5) Count Number Words" << endl;
	cout << "6) Count Consonants" << endl;
	cout << "7) Enter a Different String" << endl;
	cout << "8) Print the String" << endl;
	cout << "9) Quit" << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	return choice;
}

void upperCase(string& upper_case) {
	for (int i = 0; i < upper_case.length(); i++) {
		upper_case[i] = toupper(upper_case[i]);
	}
	return;
}