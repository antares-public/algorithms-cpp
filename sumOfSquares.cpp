#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 1251>nul");

    int n, s=0;
    cout << "Upper bound of the sum: ";
    cin >> n;

    if (n > 0) {
        while (n) {
            s+=n*n;
            n--;
        }

        cout << "Sum: " << s << endl;
    }

    else {
        cout << "Incorrect value" << endl;
    }

    // int n=10, s=0, k=1;

    // while(k <= n) {
    //     s=s+k*k;
    //     k++;
    // }

    // cout << " The sum of squares from 1 to " << n << ": " << s << endl;

    system("pause>nul");
    return 0;
}