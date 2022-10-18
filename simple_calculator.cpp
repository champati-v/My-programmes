#include <iostream>
using namespace std;

int main()
{

  // Simple calculator using "Switch Case" // 

  int operation;
  int sum, difference, product, quotient;
  int a;
  int b;
  int c;
  int d;
  int e;
  int f;
  int g;
  int h;

  cout << "Please choose the operation you want to perform: " << endl;
  cout << "1-->Addition     2-->Substraction      3-->Division      4-->Multiplcation" << endl;
  cin >> operation;

  switch (operation)
  {
  case 1:
    cout << "Addition: " << endl;
    cout << "Enter the first number: " << endl;
    cin >> a;
    cout << "Enter the second number: " << endl;
    cin >> b;
    sum = a + b;
    cout << "The sum of the two numbers is: ";
    cout << sum<<endl;
    cout<<"Hope this helps!";
    break;

  case 2:
    cout << "Substraction: " << endl;
    cout << "Enter the first number: " << endl;
    cin >> c;
    cout << "Enter the second number: " << endl;
    cin >> d;
    difference = c - d;
    cout << "The difference is: ";
    cout << difference<<endl;
    cout<<"Hope this helps!";

    break;

  case 3:
    cout << "Division: " << endl;
    cout << "Enter the Divident: " << endl;
    cin >> e;
    cout << "Enter the divisor: " << endl;
    cin >> f;
    quotient = e / f;
    cout << "The quotient is: ";
    cout << quotient<<endl;
    cout<<"Hope this helps!";

    break;

  case 4:
    cout << "Multiplication: " << endl;
    cout << "Enter the first number: " << endl;
    cin >> g;
    cout << "Enter the second number: " << endl;
    cin >> h;
    product = g * h;
    cout << "The product is: ";
    cout << product<<endl;
    cout<<"Hope this helps!";
    break;

  default:
    cout << "Invalid operation!! Please try again....." << endl;
    break;
  }

  return 0;
}