//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//class Student {
//protected:
//	string m_name;
//	int m_score;
//public:
//	Student(string t_name, int t_score) : m_name{ t_name }, m_score{ t_score } {}
//};
//
//class ClassTable {
//private:
//	vector<Student> student;
//	vector<string> headers;
//	vector<vector<string>> rows;
//	// Method for writing an HTML row in a table
//	void writeRow(ostream& out, string tag, vector<string>t_row);
//public:
//	// Has-a
//	ClassTable(vector<Student> t_student) : student{ t_student } {}
//	// Set headers for the table columns
//	// Student names
//	void setHeader(const vector<string>& t_header) {
//		headers = t_header;
//	}
//	// Add row to the table
//	void addRow(const vector<string>& t_row) {
//		rows.push_back(t_row);
//	}
//	// Write the table into HTML form onto an output stream
//	friend ostream& operator<<(ostream& out, ClassTable& obj);
//};
///****************************
//Write a row of the table, using the given tag for the table data. The tag maybe td for table data or <td>, or th for table header or <th>
//*****************************/
//void ClassTable::writeRow(ostream& out, string tag, vector<string> t_row) {
//	out << "<tr>\n";
//	for (int k = 0; k < headers.size(); k++) {
//		out << "<" << tag << "> " << t_row[k] << " </" << tag << ">";
//	}
//	out << "\n</tr>\n";
//}
//
//int main() {
//
//	return 0;
//}
//
///*************************
//Overload stream output operator to write things into HTML
//*************************/
//ostream& operator<<(ostream& out, ClassTable& obj) {
//	out << "<table border = 1>\n";
//	// Write the headers
//	obj.writeRow(out, "th", obj.headers);
//	// Write the rows of the table
//	for (int i = 0; i < obj.rows.size(); i++) {
//		obj.writeRow(out, "td", obj.rows[i]);
//	}
//	//Write end tag for table
//	out << "</table>\n";
//	return out;
//}