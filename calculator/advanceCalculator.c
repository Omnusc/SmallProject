#include <stdio.h>
#include <cs50.h>
#include <math.h>
float addition (float *first, int count);
float substraction (float *first, int count);
float multiply (float *first, int count);
float division (float *first, int count);
int main (void)
{
    float result = 0;
    float number [100];
    int count = 0;
    char op;
    char choice;
    number[count] = get_float("Input number (%d): ", count+1);
    count++;
    number[count] = get_float("Input number (%d): ", count+1);
    count++;
    choice = get_char("Input another Number (Y/N): ");
    while(choice == 'Y'|| choice == 'y')
    {
        number[count] = get_float("Input number (%d): ", count+1);
        count++;
        choice = get_char("Input another Number (Y/N): ");
    }
    printf("Enter an operator (+,-,*,/): ");
    scanf(" %c", &op);
    switch(op)
    {
        case '+':
        result = addition(number, count);
        break;
        case '-':
        result = substraction(number, count);
        break;
        case '*':
        result = multiply(number, count);
        break;
        case '/':
        result = division(number, count);
        break;
        default:
        printf("Error\n");
    }
}
float addition (float *first , int count)
{
// we take the first int in the array as result
// so the value of result is not 0 at the start of the operation
    float result = first [0];
    for(int i = 1; i < count; i++)
    {
        result += first[i];
    }
    printf("%.2f\n", result);
    return result;
}
float substraction (float *first, int count)
{
    float result = first[0];
    for(int i = 1; i < count; i++)
    {
        result -= first[i];
    }
    printf("%.2f\n", result);
    return result;
}
float multiply (float *first, int count)
{
    float result = first [0];
    for(int i = 1; i < count; i++)
    {
        result *= first[i];
    }
    printf("%.2f\n", result);
    return result;
}
float division (float *first, int count)
{
    float result = first [0];
    for(int i = 1; i < count; i++)
    {
        result /= first[i];
    }
    printf("%.2f\n", result);
    return result;
}
