//#include <iostream>
//#include <fstream>
//#include <string>
//#include <cstdlib>
//#include <Windows.h>
//using namespace std;
//
//class Encryption {
//protected:
//	ifstream inFile;
//	ofstream outFile;
//	int key;
//public:
//	Encryption(const string& inFileName, const string& outFileName);
//	void setKey(int k);
//	virtual ~Encryption();
//	//Pure virtual function
//	//Use integer instead of character
//	virtual char transform(char ch) const = 0;
//	virtual char unTransform(char ch) const = 0;
//	//Do the actual work.
//	virtual void encrypt() final;
//	virtual void decrypt() final;
//};
//
///*****************************************
//Constructor opens the input and output file.
//*****************************************/
//Encryption::Encryption(const string& inFileName, const string& outFileName) {
//	inFile.open(inFileName);
//	outFile.open(outFileName);
//	if (!inFile) {
//		cout << "The file " << inFileName << " cannot be opened.";
//		exit(1);
//	}
//	if (!outFile) {
//		cout << "The file " << outFileName << " cannot be opened.";
//		exit(1);
// 	}
//}
//
//void Encryption::setKey(int k) {
//	key = k;
//}
//
///*********************************
//Destructor closes files.
//*********************************/
//Encryption::~Encryption() {
//	inFile.close();
//	outFile.close();
//}
//
///****************************
//Encrypt function uses the virtual transform member function to transform individual characters.
//****************************/
//void Encryption::encrypt() {
//	char ch;
//	char transCh;
//	inFile.get(ch);
//	while (!inFile.fail()) {
//		transCh = transform(ch);
//		outFile.put(transCh);
//		inFile.get(ch);
//	}
//}
//
//void Encryption::decrypt() {
//	char ch;
//	char originalCh;
//	inFile.get(ch);
//	while (!inFile.fail()) {
//		originalCh = unTransform(ch);
//		outFile.put(originalCh);
//		inFile.get(ch);
//	}
//}
//
////The subclass simply overrides the virtual transformation function
//class SimpleEncryption : public Encryption {
//public:
//	char transform(char ch) const override {
//		return ch + key;
//	}
//	char unTransform(char ch) const override {
//		return ch - key;
//	}
//	SimpleEncryption(const string& inFileName, const string& outFileName) : Encryption(inFileName, outFileName) {};
//};
//
//int main() {
//	string inFileName, outFileName;
//	cout << "Enter name of the file to encrypt: ";
//	cin >> inFileName;
//	cout << "Enter name of the file to receive: ";
//	cin >> outFileName;
//	SimpleEncryption obfuscate(inFileName, outFileName);
//	obfuscate.setKey(12);
////	obfuscate.encrypt();
//	cout << "Decrypting...\n";
//	Sleep(100);
//	obfuscate.decrypt();
//}