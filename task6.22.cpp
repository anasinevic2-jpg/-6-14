#include <iostream>
using namespace std;
bool loadBoxes(int& emptySlots, int boxes) {
    if (boxes <= 0)
        return false;
    if (emptySlots < boxes)
        return false;
    emptySlots -= boxes;
    return true;
}
int main() {
    int emptySlots = 10;
    cout << "До загрузки: свободных мест = " << emptySlots << "\n";
    if (loadBoxes(emptySlots, 4))
        cout << "Успешно загружено 4 коробки.\n";
    else
        cout << "Не удалось загрузить коробки.\n";
    cout << "После загрузки: свободных мест = " << emptySlots << "\n";
    return 0;
}