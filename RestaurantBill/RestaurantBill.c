#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number;
    float tax;
    float tip;
    float totalTax;
    float totalTip;
    float totalCost;
    printf("1) Salad = $9.95\n");
    printf("2) Soup = $4.55\n");
    printf("3) Sandwich = $13.25\n");
    printf("4) Pizza = $22.35\n");
    printf("Enter the amount of tax: \n");
    scanf("%f", &tax);
    while(tax < 1)
    {
        printf("Invalid entry, please enter a valid number between 1 and 100 for tax amount!");
        scanf("%f", &tax);
    }
    printf("Enter the amount of tip: \n");
    scanf("%f", &tip);
    while(tip < 1)
    {
        printf("Invalid entry, please enter a valid number between 1 and 100 for tip amount!");
        scanf("%f", &tip);
    }
    /* Init random number generator. */
    srand(time(NULL));
    number = rand() % 5;
    if(number == 1)
    {
        tax = tax / 100;
        totalTax = tax * 9.95;
        totalTip = ((tip / 100) * 9.95);
        totalCost = 9.95 + totalTax + totalTip;
        printf("Meal Cost : $9.95\n");
        printf("Tax amount : %.2f\n", totalTax);
        printf("Tip amount : %.2f\n", totalTip);
        printf("Total bill : $ %.2f\n", totalCost);
    }
    else if(number == 2)
    {
        totalTax = ((tax / 100) * 4.55);
        totalTip = ((tip / 100) * 4.55);
        totalCost = 4.55 + totalTax + totalTip;
        printf("Meal Cost = $4.55\n");
        printf("Tax amount : %.2f\n", totalTax);
        printf("Tip amount : %.2f\n", totalTip);
        printf("Total bill : $ %.2f\n", totalCost);
    }
    else if(number == 3)
    {
        totalTax = ((tax / 100) * 13.25);
        totalTip = ((tip / 100) * 13.25);
        totalCost = 13.25 + totalTax + totalTip;
        printf("Meal Cost = $13.25\n");
        printf("Tax amount : %.2f\n", totalTax);
        printf("Tip amount : %.2f\n", totalTip);
        printf("Total bill : $ %.2f\n", totalCost);
    }
    else if(number == 4)
    {
        totalTax = ((tax / 100) * 22.35);
        totalTip = ((tip / 100) * 22.35);
        totalCost = 22.35 + totalTax + totalTip;
        printf("Meal Cost = $22.35\n");
        printf("Tax amount : %.2f\n", totalTax);
        printf("Tip amount : %.2f\n", totalTip);
        printf("Total bill : $ %.2f\n", totalCost);
    }
    return 0;
}