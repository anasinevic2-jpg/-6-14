#include <iostream>
using namespace std;
int coldDelivery(int kilometers, int rate, int coldBoxes) {
	if (kilometers < 0 || rate < 0 || coldBoxes < 0)
		return -1;

return kilometers * rate + coldBoxes * 7;
}
int main() {
	cout << "Стоимость доствки с холодильными боксами:" << coldDelivery(15, 10, 4) << endl;
	cout << "Стоимость доствки с холодильными боксами:" << coldDelivery(7, -8, 9) << endl;
	return 0;
}
