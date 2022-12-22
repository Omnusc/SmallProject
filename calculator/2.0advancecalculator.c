#include <stdio.h>
float addition (float number1, float number2);
float substraction (float number1, float number2);
float multiplication (float number1, float number2);
float division (float number1, float number2);
int main (void)
{
    float result = 0;
    char op;
    char choice;
    float number1;
    float number2;
    printf("Input number: ");
    scanf(" %f", &number1);
    printf("Input number: ");
    scanf(" %f", &number2);
    printf("Enter an operator (+,-,*,/): ");
    scanf(" %c", &op);
    switch(op)
    {
        case '+':
        result = addition(number1, number2);
        break;
        case '-':
        result = substraction(number1, number2);
        break;
        case '*':
        result = multiplication(number1, number2);
        break;
        case '/':
        result = division(number1, number2);
        break;
        default:
        printf("Error");
    }
    printf("=%0.1f\n", result);
    printf("Input another number (Y/N) ");
    scanf(" %c", &choice);
    while(choice == 'Y')
    {
        printf("Input number: ");
        scanf(" %f", &number2);
        printf("Enter an operator (+,-,*,/): ");
        scanf(" %c", &op);
        switch(op)
        {
            case '+':
            result = addition(result, number2);
            break;
            case '-':
            result = substraction(result, number2);
            break;
            case '*':
            result = multiplication(result, number2);
            break;
            case '/':
            result = division(result, number2);
            break;
            default:
            printf("Error");
        }
    printf("= %0.1f\n", result);
    printf("Input another number (Y/N) ");
    scanf(" %c", &choice);
    if(choice == 'N' || choice == 'n')
    {
        printf("Thank You");
        return 1;
    }
    }
}
float addition (float number1, float number2)
{
    float result = number1 + number2;
    return result;
}
float substraction (float number1, float number2)
{
    float result = number1 - number2;
    return result;
}
float multiplication (float number1, float number2)
{
    float result = number1 * number2;
    return result;
}
float division (float number1, float number2)
{
    float result = number1 / number2;
    return result;
}
