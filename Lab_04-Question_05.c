#include <stdio.h>

int main()
{
    int id, unit;
    float charge, bill, surcharge;
    char name[20];

    printf("Customer id: ");
    scanf("%d", &id);
    printf("\nCustomer name: ");
    scanf("%s", &name);
    printf("\nUnit consumed: ");
    scanf("%d", &unit);

    if (unit <= 199)
    {
        charge = 16.20;
    }
    else if (unit >= 200 && unit < 300)
    {
        charge = 20.10;
    }
    else if (unit >= 300 && unit < 500)
    {
        charge = 27.10;
    }
    else if (unit >= 500)
    {
        charge = 35.90;
    }
    bill = unit * charge;
    if (bill > 18000)
    {
        surcharge = bill * 15/100.0;
    }
    printf("Amount charges @. Rs. %.2f per unit: %d\n", charge, unit);
    printf("Surcharge amount: %.2f\n", surcharge);
    printf("Net amount paied by the customer: %.2f\n", bill+surcharge);
    
    
    return 0;
}