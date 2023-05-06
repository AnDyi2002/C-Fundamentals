#include <iostream>
#include <string>
using namespace std;

/**
int main()
{
    int age;
    int points;
    // string name;
    char name[50];
    cout << "Welcome, What's your name? \n";  
    // getline(cin, name);
    cin.getline(name, sizeof(name));
    cout << "Hi, " << name;
    cout << " How Old Are You? \n"; cin >> age;
    
    if (age >= 18)
    {
        cout << "Congrats You made your account.\nHow much points do you have? ";
        cin >> points;
        if (points >= 1000)
        {
            cout << "you are VIP\n";
        }   else {
            cout << "your points is too low\n";
        }
    }   else if (age < 18)
        cout << "Sorry, you still young.\n";

    cout << "See You\n";
    return 0;
}*/


// APP one even / odd checker

/**
int main()
{
    
    int x;
    cout << "Write your num "; cin >> x;
    if (x %2 == 0)
    {
        cout << "The num is even";
    } else 
    cout << "The num is odd";
    
}*/

// APP 2 find greatest num

/**
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << a << " Is the greatest num.\n";
    }   else if (b > a && b > c)
    {
        cout << b << " Is the greatest num.\n";
    } else
        cout << c << " Is the greatest num.\n";
    
}*/


// APP 3 num checker
/**
int main()
{
    int rank;
    cout << "What's your rank? "; cin >> rank;

    if (rank >= 0 && rank <= 500)
    {
        cout << "your rank is not Bad";
    } else if (rank > 500 && rank <= 1000)
    {
        cout << "your rank is good";
    } else 
    cout << "your rank is exellent";
    
}*/


// APP 4 simple calc
/**
int main()
{
    int a, b, op;

    cout << "First num: ";
    cin >> a;
    cout << "second num: ";
    cin >> b;
    cout << "choice operation\n";
    cout << "[1] +\n";
    cout << "[2] -\n";
    cout << "[3] *\n";
    cout << "[4] /\n";
    cin >> op;

    if (op == 1)
    {
        cout << a + b << "\n";
    } else if (op == 2)
    {
        cout << a - b << "\n";
    } else if (op == 3)
    {
        cout << a * b << "\n";
    } else if (op == 4)
    {
        cout << a / b << "\n";
    } else
    cout << "operation valid\n";
    
}
*/

/**
int main()
{
    int age = 40;
int points = 800;
float rate = 8.5f;

if (age > 18 && points > 500 && rate > 5)
{
    cout << "Yes Age > 18 & Points > 500 & Rate > 5";
}


// Output Needed If All Conditions Is True
// "Yes Age > 18 & Points > 500 & Rate > 5"
}
*/


/**
int main()
{
    // Test Case 1
int age = 18;
int points = 450;
cout << "what's your age? ";
cin >> age;


if (age > 18)
{
    cout << "No Age Is Not Ok\n";
}

// Output
// "No Age Is Not Ok"
// "No Points Is Not Ok"

// Test Case 2
// int age = 20;
// int points = 450;

// Output
// "Yes Age Is Ok"
// "No Points Is Not Ok"

// Test Case 3
// int age = 20;
// int points = 650;

// Output
// "Yes Age Is Ok"
// "Yes Points Is Ok"
}*/

int main()
{
    int result = 0;
int num1, num2, num3, num4;
cout << "Please Type 4 Numbers In A Row\n";
cout << "Only Even Numbers Smaller Than 20 Will Be Counted\n";
cin >> num1 >> num2 >> num3 >> num4;


int sum1 = result + num1;
int sum2 = sum1 + num2;
int sum3 = sum2 + num3;
int sum4 = sum3 + num4;


if (num1 < 20 && num1 %2 ==0)
    result += num1;
    if (num2 < 20 && num2 %2 ==0)
    result += num2;
    if (num3 < 20 && num3 %2 ==0)
    result += num3;
    if (num4 < 20 && num4 %2 ==0)
    result += num4;
    
    cout << result;
    



/*
  Test Case 1
  Numbers => 15, 16, 22, 8
  Result => 24

  "Explain"
  Starting Result Is 0
  [Number 1] 15 => Not Even Number
  [Number 2] 16 => Smaller Than 20 And Even Number
  0 + 16 = 16
  [Number 3] 22 => Not Smaller Than 20
  [Number 4] 8  => Smaller Than 20 And Even Number
  16 + 8 = 24

  =================================

  Test Case 2
  Numbers => 100, 11, 12, 18
  Result => 24

  "Explain"
  Starting Result Is 0
  [Number 1] 100 => Not Smaller Than 20
  [Number 2] 11  => Not Even Number
  [Number 3] 12  => Smaller Than 20 And Even Number
  0 + 12 = 12
  [Number 4] 18  => Smaller Than 20 And Even Number
  12 + 18 = 30
*/
}