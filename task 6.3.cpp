#include <iostream>
using namespace std;
int routeCost(int km, int rate) {
    return km * rate;
}
int routeCost(int km, int rate, int extra) {
    return km * rate + extra;
}
int routeCost(int km, int rate, int extra, int discountPercent) {
    int cost = km * rate + extra;
    return cost - cost * discountPercent / 100;
}
int main() {
    cout << "Стоимость маршрута(100, 5) = " << routeCost(100, 5) << "\n";
    cout << "Стоимость маршрута100, 5, 200) = " << routeCost(100, 5, 200) << "\n";
    cout << "Стоимость маршрута(100, 5, 200, 10) = " << routeCost(100, 5, 200, 10) << "\n";
    return 0;
}