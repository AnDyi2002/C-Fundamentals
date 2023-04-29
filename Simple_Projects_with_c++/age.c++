#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "What's your age? ";
    cin >> age;

    int age_in_days = age * 365;
    int age_in_hours = age_in_days * 24;

        cout << "Your age in days: " << age_in_days << " DAYS\n";
        cout << "Your age in hours: " << age_in_hours << " HOURS\n";
    
}