//#include <iostream>
//#include <string>
//#include <iomanip>
//using namespace std;
//
//int main() {
//	string search;
//	string phone_book[] = { { "Hoshikawa Tanaka, 678-1223" },
//							{ "Joe Looney, 586-0097" },
//							{ "Geri Palmer, 223-8787" },
//							{ "Lynn Lopez, 887-1212" },
//							{ "Holly Gaddis, 223-8878" },
//							{ "Sam Wiggins, 486-0998" },
//							{ "Bob Kain, 586-8712" },
//							{ "Tim Haynes, 586-7676" },
//							{ "Warren Gaddis, 678-4939" },
//							{ "Jean James, 678-4939" },
//							{ "Ron Palmer, 486-2783" } };
//
//	cout << "Enter a name to search in the phone book: ";
//	cin >> search;
//	cout << "Result of the search\n"
//		<< "----------------------\n";
//	for (string val : phone_book) {
//		if (string::npos != val.find(search)) {
//			cout <<  val  << endl;
//		}
//	}
//	return 0;
//}