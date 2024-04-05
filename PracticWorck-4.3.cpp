#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Проверка на чётное число\n\n";
    cout << "Введите число: ";
    cin >> x;
    if (0 != x % 2) {
        cout << "Число " << x << " не чётное!\n";
    }
    else {
        cout << "Число " << x << " чётное!\n";
    }
    return 0;


}
