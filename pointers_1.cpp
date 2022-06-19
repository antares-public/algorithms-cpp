#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 1251>nul");

    char symb;
    int num;

    char* p=&symb;
    int* q=&num;

    *p='A';
    *q=100;

    cout << "sybm = " << symb << endl;
    cout << "num = " << num << endl;

    system("pause>nul");
    
    return 0;
}