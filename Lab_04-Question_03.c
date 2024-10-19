#include <stdio.h>
int main()
{
	char x;
	printf("Enter a character: ");
	scanf("%c", &x);

	if(x>='a' && x<='z')
	{
		printf("The character is a small alphabet");
	}
	else if(x >= 'A' && x <= 'Z')
	{
		printf("The character is a capital alphabet");
	}
	else if(x >= '0' && x <= '9')
	{
		printf("The character is a digit");
	}
	else
	{
		printf("The character is a special character");
	}

	return 0;
}