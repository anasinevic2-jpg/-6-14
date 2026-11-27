#include <iostream>
using namespace std;
int foodDelivery(int distance, int perKm = 3, int minimum = 12) {
    if (distance < 0 || perKm < 0 || minimum < 0)
        return -1; 
    int cost = distance * perKm;
    return (cost > minimum) ? cost : minimum;
}
int main() {
    cout << "Доставка(5) = " << foodDelivery(5) << "\n";           
    cout << "Доставка(2, 5) = " << foodDelivery(2, 5) << "\n";     
    cout << "Доставка(5, 5, 50) = " << foodDelivery(5, 5, 50) << "\n"; 
    cout << "Доставка(-1) = " << foodDelivery(-1) << "\n";         
    return 0;
}