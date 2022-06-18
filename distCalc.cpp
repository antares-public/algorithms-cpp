#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 1251>nul");

    const int ftInMile = 5280;
    const double kmInMile = 1.609344;
    int dMile, dFt, dKm, dM;

    cout << "Enter distance in miles and pounds: " << endl;
    cout << "Miles: ";
    cin >> dMile;

    cout << "Pounds: ";
    cin >> dFt;

    double distMile = dMile + (double)dFt / ftInMile;
    double distKm = distMile * kmInMile;

    dKm = (int)distKm;

    dM = (int)((distKm - dKm) * 1000);

    cout << "Distance in km and meters: " << endl;
    cout << "Km: " << dKm << endl;
    cout << "Meters: " << dM << endl;

    system("pause>nul");
    return 0;
}