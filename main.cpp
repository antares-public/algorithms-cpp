#include <vector>
#include <iostream>
#include <numeric>  // iota
#include <algorithm>  // for_each

using namespace std;

int main() {
    vector<int> v(100);
    iota(v.begin(), v.end(), 1);  // v = [1, 2, 3, ..., 100]
    for_each(v.begin(), v.end(), [](int& a){a = a*a;});  // v = [1, 4, 9, ..., 10000]
    for_each(v.begin(), v.end(), [](int a){cout << a << ' ';});
    return 0;
}