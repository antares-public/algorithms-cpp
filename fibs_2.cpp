#include <iostream>
#include <cstdlib>

using namespace std;

void fibs(int* nums, int n) {
    for (int i = 0; i < n; i++) {
        if (i == 0 | i == 1) {
            nums[i] = 1;
        } else {
            nums[i] = nums[i-1] + nums[i-2];
        }
    }
}

int main()
{
    const int n = 20;
    int f[n];

    fibs(f,n);

    for(int i = 0; i < n; i++) {
        cout << f[i] << " ";
    }
    cout << endl;

    system("pause>nul");
    return 0;
}