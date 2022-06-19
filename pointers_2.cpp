#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int size = 12;
    int k;

    char symbs[size];

    char *p;
    char *q;

    p = symbs;
    p[0] = 'A';

    q = &symbs[size - 1];

    cout << "Between the first and last elements of the " << q - p << " position\n";

    while (p != q)
    {
        p++;
        *p = p[-1] + 1;
    }

    cout << "Array elements\n| ";

    for (k = 0; k < size; k++)
    {
        cout << symbs[k] << " | ";
    }

    cout << "\nElements in reverse order\n| ";

    for (k = 0; k < size; k++)
    {
        cout << q[-k] << " | ";
    }

    system("pause>nul");
    return 0;
}