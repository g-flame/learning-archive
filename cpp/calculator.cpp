#include <iostream>
// https://github.com/g-flame visit to explore my learning pathway
// learned c++ for this guy's vid https://www.youtube.com/watch?v=RSDzvlXmQi4&t=1s

// this calculator was built in like what 10 mins low effort so !

using namespace std; //         <-
// still don't know what this is |
int main()
{
    // defining variables
    char operand;
    int num1;
    int num2;
    // asking user for input and storing it in a variable
    cout << "A simple calculator built in C++ by G-flame!" << endl;
    cout << "Enter a operator (+,-,*,/): " << endl;
    cin >> operand;

    cout << "Enter the first number: " << endl;
    cin >> num1;

    cout << "Enter the second number: " << endl;
    cin >> num2;

    switch (operand) // the actual calculator!!
    {
    case '+':
        cout << "RESULT: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "RESULT: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "RESULT: " << num1 * num2 << endl;
        break;
    case '/':
        cout << "RESULT: " << num1 / num2 << endl;
        break;
    default:
        cout << "Something went wrong try again!" << endl;
        break;
    }
    // i know using switch was not good but who cares it works !!
    return 0;
}
// EOF
