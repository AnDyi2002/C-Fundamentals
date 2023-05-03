#include <iostream>
using namespace std;


int main()
{
    int num = 3;
    cout << num + num << "\n";
    cout << num * num - num << "\n";
    cout << (num * num) - num << "\n";
    cout << (num + num + num) - num << "\n";

    cout << (num / num) * (num + num) << "\n";
    cout << (num + num) * (num / num) << "\n";
    cout << (num / num) * (num + num) << "\n";
}

int main()
{
cout << 10 * 20 + 15 % 3 + 190 + 10 - 400 << "\n"; // 0
cout << 15 % 3 << "\n";
}

int main()
{
    // Do Not Edit
int num = 3;

    num += 3;

// Do Not Edit
cout << num << "\n"; // 6
}

int main()
{
    cout << ((int)10.5 * 5) + (int(40.5) + (int)10.1) << "\n"; // 100
}

int main()
{
    // Assign The Values
char a = 'd';
char b = '\n';
char c = 'Z';

// Do Not Edit
cout << b * c + a << "\n"; // 1000
}

int main()
{
    /*
We Need To Use This Operators In Solutions
- &&
- >=
- <=
- >
- <
- ==
- !
- ||
*/

int a = 10;
int b = 25;
int c = 15;

cout << (a < b) << "\n";          // True
cout << (c > a) << "\n";          // True
cout << (a + c == b) << "\n";     // True
cout << (c != a) << "\n";         // True
cout << (c < b) << "\n";         // True
cout << (b > a && b > c) << "\n"; // True
cout << !(a > b) << "\n";         // True
cout << (a < b || b > a) << "\n"; // True
}



int main()
{
    int num = 10;
cout << --num << " | " << num++ << " | " << ++num << "\n"; // 9 | 9 | 11
cout << num++ << " | " << num << " | " << num-- << "\n"; // 11 | 12 | 12
cout << num-- << " | " << num-- << " | " << num << "\n"; // 11 | 10 | 9
}
