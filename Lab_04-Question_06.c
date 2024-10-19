#include <stdio.h>

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (1 <= n && n <= 9)
    {
        switch (n)
        {
        case 1:
            printf("One.");
            break;
        case 2:
            printf("Two.");
            break;
        case 3:
            printf("Three.");
            break;
        case 4:
            printf("Four.");
            break;
        case 5:
            printf("Five.");
            break;
        case 6:
            printf("Six.");
            break;
        case 7:
            printf("Seven.");
            break;
        case 8:
            printf("Eight.");
            break;
        case 9:
            printf("Nine.");
            break;
        }
    }
    else if(n > 9) 
    {
        printf("Number is greater than 9");
    }
    
    
    return 0;
}