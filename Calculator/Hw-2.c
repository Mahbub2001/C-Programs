// Calculator example using C code
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#define KEY "Enter the Operation you want to do:"
void cal_to_far();
void kg_to_pound();
void meter_to_ft();
void bmi();
void all_calculator_operations();
int main()
{
    int X = 1;
    char operations;
    all_calculator_operations();
    while (X)
    {
        printf("\n");
        printf("%s : ", KEY);
        operations = getche();
        switch (operations)
        {
        case '1':
            cal_to_far();
            break;
        case '2':
            kg_to_pound();
            break;
        case '3':
            meter_to_ft();
            break;
        case '4':
            bmi();
            break;
        case 'H':
        case 'h':
            all_calculator_operations();
            break;
        case 'Q':
        case 'q':
            exit(0);
            break;
        case 'c':
        case 'C':
            system("cls");
            all_calculator_operations();
            break;
        default:
            system("cls");
            printf("\nYou have entered unavailable option");
            printf("\nPlease Enter any one of below available ");
            all_calculator_operations();
        }
    }
}
void all_calculator_operations()
{
    printf("\nWelcome to Converter \n\n");
    printf("Press 'Q' or 'q' to quit the program\n");
    printf("Press 'H' or 'h' to display below options\n");
    printf("Enter 'C' or 'c' to clear the screen and");
    printf(" display available option \n\n");
    printf("Enter 1 for Calcius to farenhide \n");
    printf("Enter 2 for kg to pound \n");
    printf("Enter 3 for meter to ft \n");
    printf("Enter 4 for BMI \n");
}

void cal_to_far()
{
    float fahrenheit, celsius;
    printf("\nEnter the number that you want to convert :");
    scanf("%f", &celsius);
    fahrenheit = ((celsius * 9) / 5) + 32;
    printf("\n\n Temperature in fahrenheit is:  %f", fahrenheit);
}

void kg_to_pound()
{
    float kg, lbs;
    printf("\n\n Enter Weight in Kilogram  : ");
    scanf("%f", &kg);
    lbs = kg * 2.20462;
    printf("\n\n %f Kg  =  %f Lbs (pound) \n", kg, lbs);
}
void meter_to_ft()
{
    float meter, feet;

    printf("\n\n Enter Length in Meters  : ");
    scanf("%f", &meter);

    feet = (meter * 3.26);
    printf("\n\n %f meter in feet = %f  \n", meter, feet);
}
void bmi()
{
    float height, weight, bmi;

    printf("\nEnter your height in meter\n");
    scanf("%f", &height);

    printf("Enter your weight in kg\n");
    scanf("%f", &weight);

    bmi = weight / (height * height);

    printf("Your Body Mass Index(BMI) is %f\n", bmi);

    if (bmi < 15)
    {
        printf("Your BMI category is: Starvation\n");
    }
    else if (bmi >= 15.1 && bmi <= 17.5)
    {
        printf("Your BMI category is: Anorexic\n");
    }
    else if (bmi >= 17.6 && bmi <= 18.5)
    {
        printf("Your BMI category is: Underweight\n");
    }
    else if (bmi >= 18.6 && bmi <= 24.9)
    {
        printf("Your BMI category is: Ideal\n");
    }
    else if (bmi >= 25 && bmi <= 25.9)
    {
        printf("Your BMI category is: Overweight\n");
    }
    else if (bmi >= 30 && bmi <= 30.9)
    {
        printf("Your BMI category is: Obese\n");
    }
    else if (bmi >= 40)
    {
        printf("Your BMI category is: Morbidly Obese\n");
    }
    else
    {
        printf("Wrong entry\n");
    }
}
