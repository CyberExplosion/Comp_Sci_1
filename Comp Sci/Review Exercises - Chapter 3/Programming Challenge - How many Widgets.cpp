#include <iostream>
using namespace std;

int main_done11() {
	const double WIDGET_WEIGHT = 12.5;

	int widget_amount;

	double pallet_weight_alone,
		pallet_weight_with_widget;

	cout << "How much the pallet weight by itself: ";
	cin >> pallet_weight_alone;
	cout << "How much the pallet weight with widgets on it: ";
	cin >> pallet_weight_with_widget;

	widget_amount = (pallet_weight_with_widget - pallet_weight_alone) / WIDGET_WEIGHT;

	cout << "Number of widgets stacked on the pallet: " << widget_amount << endl;

	return 0;
}