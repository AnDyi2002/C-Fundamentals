#include <iostream>
using namespace std;

/**
int main()
{
    int x;
    char y;
    cout << "Please Enter your ASCII Value: ";
    cin >> x;
    cout << char(x)  << "\n";

    cout << "Please Enter your Character: ";
    cin >> y;
    cout << int(y);
}
*/


/*
#include <iostream>
#include <limits>
using namespace std;




int main()
{
    cout << "\"Maximum Integer Number Is => " << INT_MAX << "\"" << endl;
    cout << "\"Minimum Integer Number Is => " << INT_MIN << "\"" << endl;
    cout << "\"Maximum Short Integer Number Is => " << SHRT_MAX << "\"" << endl;
    cout << "\"Minimum Short Integer Number Is => " << SHRT_MIN << "\"" << endl;
}
*/


/*
int main()
{
    cout << sizeof((int)10.5 + 5 + (int)20.5 + 10) << "\n";
}
*/


/*
int main()
{
    int a = 69;
    int b = 108;
    int c = 122;
    int d = 101;
    int e = 114;
    int f = 111;

    cout << "\"Character Of This ASCII Value " << a << " Is " << char(a) << "\"\n";
    cout << "\"Character Of This ASCII Value " << b << " Is " << char(b) << "\"\n";
    cout << "\"Character Of This ASCII Value " << c << " Is " << char(c) << "\"\n";
    cout << "\"Character Of This ASCII Value " << d << " Is " << char(d) << "\"\n";
    cout << "\"Character Of This ASCII Value " << e << " Is " << char(e) << "\"\n";
    cout << "\"Character Of This ASCII Value " << f << " Is " << char(f) << "\"\n";

}
*/

/*
int main()
{
    int a = 1;
    int b = 13;
    int c = 17;
    int d = 70;

    cout << char(d - a);
    cout << char(c + d); 
    cout << char (b + d);

// Output Needed
//"EWS"
}
*/


/*
int main()
{
// Edit Anything Except Values
short int a = 100;
long long int b = 15001500;
long double c = 100.54565746;

// Do Not Edit
cout << sizeof(a) << " Bytes\n"; // 2 Bytes
cout << sizeof(b) << " Bytes\n"; // 8 Bytes
cout << sizeof(c) << " Bytes\n"; // 16 Bytes
}
*/

/*
int main()
{
    // Edit Anything Except Values
int a = 100;
signed int b = -100;
int  c = 100;
float d = 500.55;

// Do Not Edit
cout << a << "\n"; // 100
cout << b << "\n"; // -100
cout << c << "\n"; // 100
cout << d << "\n"; // 500.55
return 0;
}
*/

/**
typedef long long int lli;

int main()
{
    lli num = 150050005;
    cout << num << "\n";
}
*/


/*
int main()
{
    // Do Not Edit Here
short int a = 100;
float b = 98.5f;
double c = 1.7;

// Edit This Line And Use Type Casting To Get The Output
cout << a + (int)b + int(c) + 1 << "\n"; // 200
}
*/

int main()
{
    // Do Not Edit Here
short a = 1000;
int b = 10000;
long double c = 5.560000505012;


cout << sizeof(a) << "\n";
cout << sizeof(b) << "\n";
cout << sizeof(c) << "\n";
cout << "=====================\n";
// Change ??? To Something Else To Get The Output
cout << sizeof(c) - sizeof(b) << "\n"; // 12
cout << sizeof(c) + sizeof(b) << "\n"; // 20
cout << sizeof(a) * sizeof(c) << "\n"; // 32
cout << a * int(c) << "\n"; // 5000
cout << char(( sizeof(c) + sizeof(b)) * sizeof(b)) << "\n"; // P

}
