#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char op;
    cout << "Enter the value of First Operand: ";
    cin >> a;

    cout << "Enter the value of Second Operand: ";
    cin >> b;

    cout << "Enter the Operation to Perform: ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Additon of two Operand is: " << (a + b) << endl;
        break;

    case '-':
        cout << "Subtraction of two Operand is: " << (a - b) << endl;
        break;

    case '*':
        cout << "Multiplication of two Operand is: " << (a * b) << endl;
        break;

    case '/':
        cout << "Divide of two Opeand is: " << (a / b) << endl;
        break;

    case '%':
        cout << "Remainder of two operand is: " << (a % b) << endl;
        break;
    }
}