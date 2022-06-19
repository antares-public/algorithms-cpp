#include <iostream>
#include <cstdlib>

using namespace std;

void func1 (int x) {
    x += 10;
}

void func2(int* x) {
    *x += 10;
}

int main()
{
    system("chcp 1251>nul");

    int a = 2;
    func1(a);

    cout << a << endl;

    int b = 2;
    func2(&b);

    cout << b << endl;

    system("pause>nul");
    return 0;
}