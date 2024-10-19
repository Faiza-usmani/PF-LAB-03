#include <stdio.h>
int main()
{
	int num1, num2;
	char op;
	printf("Enter the operation you want to perform:\t");
	scanf("%c", &op);

	printf("Enter two numbers: ");
	scanf("%d%d",&num1, &num2);

	switch(op)
	{
	case '+':
		printf("The sum is %d", num1 + num2);
	break;
	case '-':
		printf("The subtraction is %d", num1 - num2);
	break;
	case '*':
		printf("The multiplication is %d", num1 * num2);
	break;
	case '/':
		printf("The division is %.2f", (float)num1 / num2);
	break;

	default:
		printf("Enter a valid operator");
	}

	return 0;
}