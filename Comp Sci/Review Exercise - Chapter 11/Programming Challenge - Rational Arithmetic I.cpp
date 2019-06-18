#include <iostream>
using namespace std;
// Integrated challenge 9

class Rational {
private:
	int m_numerator,
		m_denomenator;
	bool zero_flag = false;
	//Function
	void reduce();
public:
	Rational(int t_numerator, int t_denomenator) : m_numerator{t_numerator}, m_denomenator{t_denomenator}{
		reduce();
	}
	friend ostream& operator<<(ostream&, const Rational);
	friend Rational operator+(const Rational a, const Rational b);
	friend Rational operator-(const Rational a, const Rational b);
	friend Rational operator*(const Rational a, const Rational b);
	friend Rational operator/(const Rational a, const Rational b);
	friend istream& operator>>(istream&, Rational&);
};

int main() {
	Rational firstnum(2, 3),
		secondnum(0, 0);
	Rational store = firstnum + secondnum;
	cout << store;
	return 0;
}

void Rational::reduce() {
	int divisor;
	if (m_denomenator != 0) {
		if (m_numerator != 0) {
			if (m_numerator % m_denomenator == 0) {
				m_numerator = m_numerator / m_denomenator;
				m_denomenator = 1;
			}
			else {
				for (int i = 1; i <= m_denomenator; i++) {
					if (m_denomenator % i == 0) {
						if (m_numerator % i == 0) {
							m_numerator /= i;
							m_denomenator /= i;
						}
					}
				}
			}
		}
		else zero_flag = true;
	}
	else zero_flag = true;
}

ostream& operator<<(ostream& out, const Rational obj){
	out << obj.m_numerator << "/" << obj.m_denomenator << endl;
	return out;
}

Rational operator+(const Rational a, const Rational b) {
	Rational c(0, 0);
	if (!a.zero_flag && !b.zero_flag) {
		c.m_numerator = (a.m_numerator * b.m_denomenator) + (b.m_numerator * a.m_denomenator);
		c.m_denomenator = a.m_denomenator * b.m_denomenator;
		c.reduce();
	}
	else {
		if (a.zero_flag) {
			c.m_numerator = b.m_numerator;
			c.m_denomenator = b.m_denomenator;
		}
		if (b.zero_flag) {
			c.m_numerator = a.m_numerator;
			c.m_denomenator = a.m_denomenator;
		}
	}
	return c;
}

Rational operator-(const Rational a, const Rational b) {
	Rational c(0, 0);
	c.m_numerator = (a.m_numerator * b.m_denomenator) - (b.m_numerator * a.m_denomenator);
	c.m_denomenator = a.m_denomenator * b.m_denomenator;
	c.reduce();
	return c;
}

Rational operator*(const Rational a, const Rational b) {
	Rational c(0, 0);
	c.m_numerator = a.m_numerator * b.m_denomenator;
	c.m_denomenator = a.m_denomenator * b.m_denomenator;
	c.reduce();
	return c;
}

Rational operator/(const Rational a, const Rational b) {
	Rational c(0, 0);
	c.m_numerator = a.m_numerator * b.m_denomenator;
	c.m_denomenator = a.m_denomenator * b.m_numerator;
	c.reduce();
	return c;
}

istream& operator>>(istream& in, Rational& obj) {
	in >> obj.m_numerator >> obj.m_denomenator
}
