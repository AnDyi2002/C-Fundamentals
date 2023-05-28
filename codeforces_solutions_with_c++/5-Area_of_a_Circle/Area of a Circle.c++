#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double t, x, y = 3.141592653;
    cin >> x;
    t = y * x * x;
    cout << fixed << setprecision(9) << t;
}