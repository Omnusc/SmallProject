#include <stdio.h>
#include <math.h>
void addition (float first, float second);
void substraction (float first, float second);
void multiply (float first, float second);
void division (float first, float second);
void modular (float first, float second);
int main (void)
{
    float first_number;
    float second_number;
    char op;
    printf("Input 1st number: ");
    scanf("%f", &first_number);
    printf("Input 2nd number: ");
    scanf("%f", &second_number);
    printf("Enter an operator (+,-,*,/,%%): ");
    scanf(" %c", &op);
    switch(op)
    {
        case '+':
        addition(first_number, second_number);
        break;
        case '-':
        substraction(first_number, second_number);
        break;
        case '*':
        multiply(first_number, second_number);
        break;
        case '/':
        division(first_number, second_number);
        break;
        case '%':
        modular(first_number, second_number);
        break;
        default:
        printf("Error\n");
    }
}
void addition (float first, float second)
{
    float result = first + second;
    printf("%.1f + %.1f adalah %.1f", first, second, result);
    printf("\n");
}
void substraction (float first, float second)
{
    float result = first - second;
    printf("%.1f - %.1f adalah %.1f", first, second, result);
    printf("\n");
}
void multiply (float first, float second)
{
    float result = first * second;
    printf("%.1f x %.1f adalah %.1f", first, second, result);
    printf("\n");
}
void division (float first, float second)
{
    float result = first / second;
    printf("%.1f / %.1f adalah %.1f", first, second, result);
    printf("\n");
}
void modular (float first, float second)
{
    float result = fmod(first, second);
    printf("%.1f  %.1f adalah %.1f", first, second, result);
    printf("\n");
}