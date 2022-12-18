#include <stdio.h>
void celcFahr (float degree);
void celcKelv (float degree);
void fahrCelc (float degree);
void fahrKelv (float degree);
void kelvCelc(float degree);
void kelvFahr(float degree);
int main (void)
{
    int choice1;
    char choiceLast;
    float result = 0;
    do
    {
        printf("1. Celcius\n");
        printf("2. Fahrenheit\n");
        printf("3. Kelvin\n");
        printf("4. Exit\n");
        printf("What type of scale do you want to convert (1,2,3,or 4 exit)? ");
        scanf("%d", &choice1);
        // to catch error
        if(choice1 >=  4 || choice1 <= 0)
        {
            printf("Thank you for using our service\n");
            return 1;
        }
        float degree = 0;
        printf("Degree : ");
        scanf("%f", &degree);
        // Convert Celcius Value
        if(choice1 == 1)
        {
            int choiceCelcius = 0;
            do
            {
                printf("1. Fahrenheit\n");
                printf("2. Kelvin\n");
                printf("Convert to (1,2)? ");
                scanf("%d", &choiceCelcius);
                // Celcius to fahrenheit
                if(choiceCelcius == 1)
                {
                    celcFahr(degree);
                }
                // Celcius to Kelvin
                else if(choiceCelcius == 2)
                {
                    celcKelv(degree);
                }
            }while (choiceCelcius > 2 || choiceCelcius <= 0);
        }
        // Convert Fahrenheit value
        else if (choice1 == 2)
        {
            int choiceFahr = 0;
            do
            {
                printf("1. Celcius\n");
                printf("2. Kelvin\n");
                printf("Convert to (1,2)? ");
                scanf("%d", &choiceFahr);
                // Fahr to Celcius
                if(choiceFahr == 1)
                {
                    fahrCelc(degree);
                }
                // Fahr to Kelvin
                else if (choiceFahr == 2)
                {
                    fahrKelv(degree);
                }
            }while (choiceFahr > 2 || choiceFahr <= 0);
        }
        // Convert Kelvin value
        else if(choice1 == 3)
        {
            int choiceKelv = 0;
            do
            {
                printf("1. Celcius\n");
                printf("2. Fahrenheit\n");
                printf("Convert to (1,2)? ");
                scanf("%d", &choiceKelv);
                // Kelvin to celcius
                if(choiceKelv == 1)
                {
                    kelvCelc(degree);
                }
                // Kelvin to fahrenheit
                else if (choiceKelv == 2)
                {
                    kelvFahr(degree);
                }
            }while (choiceKelv > 2 || choiceKelv <= 0);
        }
        printf("Thank You for using this service.. Continue (Y / N ): ");
        scanf(" %c", &choiceLast);
    }while(choiceLast == 'Y' || choiceLast == 'y');
    printf("Bye bye\n");
}

// Celcius to Fahrenheit
void celcFahr (float degree)
{
    float result = (degree * 1.8) + 32;
    printf("%.0f Celcius is %.0f fahrenheit\n", degree, result);
}
// Celcius to Kelvin
void celcKelv (float degree)
{
    float result = degree + 273;
    printf("%.0f Celcius is %.0f Kelvin\n", degree, result);
}
// Fahrenheit to Celcius
void fahrCelc (float degree)
{
    float result = (degree - 32) * 0.5556;
    printf("%.0f Fahrenheit is %.0f Celcius\n", degree, result);
}
// Fahrenheit to Kelvin
void fahrKelv (float degree)
{
    float result = ((degree - 32) * 5) / 9 + 273;
    printf("%.0f Fahrenheit is %.0f Kelvin\n", degree, result);
}
// Kelvin to Celcius
void kelvCelc (float degree)
{
    float result = degree - 273;
    printf("%.0f Kelvin is %.0f Celcius\n", degree, result);
}
// Kelvin to Fahrenheit
void kelvFahr (float degree)
{
    float result = ((degree - 273) * 9) / 5 + 32;
    printf("%.0f Kelvin is %.0f Fahrenheit\n", degree, result);
}