//#include <iostream>
//#include <iomanip>
//#include <string>
//using namespace std;
//
//class Heading {
//private:
//	string company_name;
//	string report_name;
//public:
//	Heading() {
//		company_name = "ABC Industries";
//		report_name = "Report";
//	}
//	Heading(string t_comp, string t_report) : company_name(t_comp), report_name(t_report) {}
//	void print_one();
//	void print_box();
//};
//
//int main() {
//	string comp_name,
//		rep_name;
//
//	cout << "Enter the company name: ";
//	getline(cin, comp_name);
//	cout << "Enter the report name: ";
//	getline(cin, rep_name);
//	Heading user(comp_name, rep_name);
//	user.print_one();
//	cout << endl;
//	user.print_box();
//
//	return 0;
//}
//
//void Heading::print_one() {
//	cout << company_name << " " << report_name << endl;
//}
//
//void Heading::print_box() {
//	int star_length;
//	//size of bigger - size of smaller = the amount of character needs to be moved 
//	int longer, shorter;
//	int space_long, space_short;
//	
//	if (company_name.size() > report_name.size()) {
//		longer = company_name.size();
//		shorter = report_name.size();
//	}
//	else {
//		longer = report_name.size();
//		shorter = company_name.size();
//	}
//	if (longer % 2 == 0) {
//		//Even number of characters, that means even number of stars for the characters in the middle
//		star_length = longer * 2;
//	}
//	else {
//		//Odd number of characters, that means odd stars for the characters in the middle
//		star_length = longer * 3;
//	}
//
//	space_long = (star_length - longer) / 2;
//	space_short = (star_length - shorter) / 2;
//
//	if (company_name.size() == longer) {
//		cout << setfill('*') << setw(star_length) << '*' << endl << setfill(' ')
//			 << setw(space_long + company_name.size()) << company_name << endl;
//		cout << setw(space_short + report_name.size()) << report_name << endl
//			<< setfill('*') << setw(star_length) << '*' << endl << setfill(' ');
//	}
//	else {
//			cout << setfill('*') << setw(star_length) << '*' << endl << setfill(' ')
//				<< setw(space_short + company_name.size()) << company_name << endl;
//			cout << setw(space_long + report_name.size()) << report_name << endl
//				<< setfill('*') << setw(star_length) << '*' << setfill(' ') << endl;
//	}
//}
