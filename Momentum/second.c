#include<stdio.h>

int main()
{
    float units, bill_amount, surcharge;

    printf("Enter electricity units: ");
    scanf("%f", &units);

    if (units <= 50)
    {
        bill_amount = units * 0.50;
    } 
    else if (units <= 150)
    {
        bill_amount = (50 * 0.50) + ((units - 50) * 0.75);
    }
    else if (units <= 250)
    {
        bill_amount = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    }
    else
    {
        bill_amount = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    surcharge = bill_amount * 0.20;

    bill_amount += surcharge;

    printf("Total Electricity Bill: Rs. %.2f", bill_amount);
}