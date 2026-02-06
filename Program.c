#include <stdio.h>

int main()
{
    printf("Weight converstion calculator\n");
    printf("Choose one option: \n");
    printf("1) Convert from kg to lbs\n");
    printf("2) Convert from lbs to kg\n");

    int option = 0;

    scanf("%d", &option);

    if (option == 1)
    {
        double kg = 0.0;
        double lbs = 0.0;
        printf("Enter weight (in kg): ");
        scanf("%lf", &kg);
        lbs = kg * 2.20462262;
        printf("%.2lf kilograms is equivalent to %.2lf pounds", kg, lbs);
    }

    else if (option == 2)
    {
        double lbs = 0.0;
        double kg = 0.0;
        printf("Enter weight (in lbs): ");
        scanf("%lf", &lbs);
        kg = lbs * 0.45359237;
        printf("%.2lf pounds is equivalent to %.2lf kilograms", lbs, kg);
    }

    else
    {
        printf("Unknown option selection. Please try again");
    }
}