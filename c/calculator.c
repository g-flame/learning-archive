#include <stdio.h>

// https://github.com/g-flame view my projects !!

// the main calculator function
int calc(int number, char operand, int number_)
{
    if (operand == '+') // addition
    {
        int sum = number + number_;
        return sum;
    }
    else if (operand == '-') // subtraction
    {
        int sub = number - number_;
        return sub;
    }
    else if (operand == '*') // multiplication
    {
        int multi = number * number_;
        return multi;
    }
    else if (operand == '/') // division with 0/0 disabled
    {
        if (number_ == 0)
        {
            printf("A number can't be divided by 0! Do you want your pc to die ? "); // no 0/0 on my watch!
            return 0;
        }
        else
        {
            int divd = number / number_;
            return divd;
        }
    }
    else
    {
        printf("\nPlease enter a valid operator!:");
        return 0;
    }
}

int main()
{

    printf("----------------------------------");
    printf("\nA simple calculator built in C by G-flame!\n");
    // defining operator and assign value
    printf("\nEnter a operator(+,-,*,/): ");
    char operand;
    scanf(" %c", &operand);
    // defining 1st no and assigning value
    printf("\nEnter the first number: ");
    int number;
    scanf("%d", &number);

    if (operand == '+')
        printf("\n    PLUS    +\n");
    else if (operand == '-')
        printf("\n    MINUS   -\n");
    else if (operand == '*')
        printf("\n    MULTI   *\n");
    else if (operand == '/')
        printf("\n    DIVID   /\n");
    else
        printf("\n      WTF   ?\n");

    // defining 2nd no and assigning value
    printf("\nEnter the second number: ");
    int number_;
    scanf("%d", &number_);
    // feeding function the the numbers and operator for calculation
    printf("RESULT: ");
    int giveout = calc(number, operand, number_); // please give the values according to the order that you type it in the function
    printf("%d", giveout);                        // using & in giveout prints the the memory address don't use & here
    printf("\n----------------------------------");
}
// EOF
