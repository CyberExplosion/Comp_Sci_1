#include <iostream>
using namespace std;

int main_done20cha() {
	double wavelength;

	cout << "Enter the wavelength in meters: ";
	cin >> wavelength;

	if (wavelength <= 1e-11) {
		cout << "The ray is a Gamma Rays\n";
	}
	else if (wavelength <= 1e-8&&wavelength>1e-11) {
		cout << "The ray is X-ray\n";
	}
	else if (wavelength <= 4e10 - 7 && wavelength > 1e-8) {
		cout << "The ray is Ultraviolet\n";
	}
	else if (wavelength <= 7e-7&&wavelength > 4e-7) {
		cout << "The ray is Visible Light\n";
	}
	else if (wavelength <= 1e10 - 3 && wavelength > 7e-7) {
		cout << "The ray is Infrared\n";
	}
	else if (wavelength <= 1e-2&&wavelength > 1e-3) {
		cout << "The ray is Microwaves\n";
	}
	else if (wavelength > 1e-2) {
		cout << "The ray is Radio Waves\n";
	}

	return 0;
}