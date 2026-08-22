// Basic calculator using switch-case.
#include <stdio.h>

int main(void)
{
	int first, second;
	char operator;

	scanf("%d %d %c", &first, &second, &operator);

	switch (operator)
	{
		case '+':
			printf("%d\n", first + second);
			break;
		case '-':
			printf("%d\n", first - second);
			break;
		case '*':
			printf("%d\n", first * second);
			break;
		case '/':
			if (second != 0)
				printf("%d\n", first / second);
			else
				printf("Cannot divide by zero\n");
			break;
		case '%':
			if (second != 0)
				printf("%d\n", first % second);
			else
				printf("Cannot divide by zero\n");
			break;
		default:
			printf("Invalid operator\n");
	}

	return 0;
}
