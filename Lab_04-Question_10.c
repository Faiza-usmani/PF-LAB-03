#include <stdio.h>

int main()
{
    float temp;
    printf("Enter the current temperature in celcius: ");
    scanf("%f", &temp);

    if (temp < 0)
        printf("Freezing weather");
    else if (temp >= 0 && temp <= 10)
        printf("Very cold weather");
    else if (temp >= 11 && temp <= 20)
        printf("Cold weather");
    else if (temp >= 21 && temp <= 30)
        printf("Normal temperature");
    else if (temp >= 31 && temp <= 40)
        printf("Hot weather");
    else if (temp > 40)
        printf("Very hot weather");
    return 0;
}