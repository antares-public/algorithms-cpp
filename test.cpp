#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 1251>nul");

    cout << "Ax = B\n";

    double A, B;
    cout << "A = ";
    cin >> A;

    cout << "B = ";
    cin >> B;

    try {
        if (A!=0) {
            throw A;
        }
        if (B!=0) {
            throw "No solution";
        }

        cout << "The solution is any number!"; << endl;
    }
    catch (double e) {
        cout << "Solution: " << B/e << endl;
    }
    catch (char* e) {
        cout << e << endl;
    }

    // int n = 1;
    // while (n < 6)
    // {
    //     if (n % 2 == 0)
    //     {
    //         cout << n << endl;
    //     }
    //     n++;
    // }

    // int n=1;

    // while(n <= 10) {
    //     cout << n << endl;
    //     n++;
    // }

    system("pause>nul");

    return 0;
}