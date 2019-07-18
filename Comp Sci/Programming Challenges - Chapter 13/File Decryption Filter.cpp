//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int main() {
//	ifstream encryptedFile;
//	ofstream decryptedFile;
//	string line;
//
//	encryptedFile.open("new4 encrypted.txt");
//	decryptedFile.open("new4 decrypted.txt");
//
//	if (encryptedFile.fail()) {
//		cout << "The encrypted file failed to open\n";
//		return 1;
//	}
//	if (decryptedFile.fail()) {
//		cout << "Cannot create the decrypted fail\n";
//		return 1;
//	}
//	//The encrypted file increment every letter by 10. To decrypt we minus 10 on all character
//	while (!encryptedFile.eof()) {
//		getline(encryptedFile, line);
//		for (int i = 0; i < line.size(); i++) {
//			line[i] = line[i] - 10;
//		}
//		cout << line << endl;
//		decryptedFile << line;
//	}
//
//	encryptedFile.close();
//	decryptedFile.close();
//	return 0;
//}