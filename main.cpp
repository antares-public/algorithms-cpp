#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    int a, b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    int c = a + b;
    cout << "Сумма чисел = " << c << endl;
    return 0;
}