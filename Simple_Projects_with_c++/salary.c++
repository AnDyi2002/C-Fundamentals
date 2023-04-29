#include <iostream>
using namespace std;

int main()
{
    const int days= 30;
    int salary;

        cout << "How much you take a day? ";
        cin >> salary;

            int month = days * salary;
                cout << "Your salary per month: " << month << " EGP";

}