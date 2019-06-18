//#include <iostream>
//using namespace std;
//
//class EncryptableString :private string {
//private:
//	string m_encrypt;
//public:
//	EncryptableString(const string& t_str) :string(t_str) {
//		m_encrypt = t_str;
//		encrypt();
//	}
//	void encrypt();
//};
//
//int main() {
//	EncryptableString encrpt("zZz");
//	return 0;
//}
//
//void EncryptableString::encrypt() {
//	for (int i = 0; i < m_encrypt.size(); i++) {
//		if (m_encrypt[i] == 'z') {
//			m_encrypt[i] = 'a';
//		}
//		else if (m_encrypt[i] == 'Z') {
//			m_encrypt[i] = 'A';
//		}
//		else {
//			m_encrypt[i] = m_encrypt[i] + 1;
//		}
//	}
//	cout << m_encrypt << endl;
//}