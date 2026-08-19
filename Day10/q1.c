#include <stdio.h>

int main(void)
{
	int side1, side2, side3;

	scanf("%d %d %d", &side1, &side2, &side3);

	if (side1 == side2 && side2 == side3)
	{
		printf("Equilateral");
	}
	else if (side1 == side2 || side2 == side3 || side1 == side3)
	{
		printf("Isosceles");
	}
	else
	{
		printf("Scalene");
	}

	return 0;
}
