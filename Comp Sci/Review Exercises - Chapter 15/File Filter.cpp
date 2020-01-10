//#include <iostream>
//#include <fstream>
//using namespace std;
//
////Add challenge number 6
//
//class AbstractFileFilter {
//public:
//	void doFilter(ifstream& in, ofstream& out);
//	virtual char transform(char ch) = 0;
//};
//
//class Encryption : public AbstractFileFilter {
//private:
//	int key;
//public:
//	Encryption(int k) : key(k) {};
//private:
//	virtual char transform(char ch) override;
//};
//
//class UpperCase :public AbstractFileFilter {
//private:
//	virtual char transform(char ch) override;
//};
//
//class originalCopy :public AbstractFileFilter {
//private:
//	virtual char transform(char ch) override;
//};
//
//class lineBreakToSpace : public AbstractFileFilter {
//private:
//	virtual char transform(char ch) override;
//};
//
//int main() {
//	ifstream inFile;
//	ofstream outFile;
//
//	inFile.open("fileFilter.txt");
//	outFile.open("filtered.txt");
//
//	if (inFile.fail()) {
//		cout << "Could not open the input file\n";
//		exit(1);
//	}
//	if (outFile.fail()) {
//		cout << "Could not open the output file\n";
//		exit(2);
//	}
//
//	lineBreakToSpace obfuscate;
//	obfuscate.doFilter(inFile, outFile);
//}
//
//void AbstractFileFilter::doFilter(ifstream& in, ofstream& out) {
//	char ch;
//	//have to get one character first to make sure it's not fail
//	in.get(ch);
//	while (!in.fail()) {
//		ch = transform(ch);
//		out << ch;
//		in.get(ch);
//	}
//}
//
//char Encryption::transform(char ch) {
//	return ch + key;
//}
//
//char UpperCase::transform(char ch) {
//	return toupper(ch);
//}
//
//char originalCopy::transform(char ch) {
//	return ch;
//}
//
//char lineBreakToSpace::transform(char ch) {
//	if (ch == '\n')
//		return ' ';
//	else
//		return ch;
//}
