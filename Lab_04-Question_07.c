#include <stdio.h>

int main()
{
    int intensity;
    printf("Enter light intensity(0-1000): ");
    scanf("%d", &intensity);

    if (intensity < 0 || intensity > 1000)
    {
        printf("Invalid intensity, pease enter within the limit");
    }
    else
    {
        if (intensity > 500)
        {
            printf("Phone is ecposed to sunshine");
        }
        else if (intensity >= 0 && intensity < 100)
        {
            printf("The phone in somewhere there is evening/dim lightning");
        }
        else if (intensity >= 100 && intensity <= 500)
        {
            printf("The phone is somewhere with bright lightning");
        }
    }

    return 0;
}