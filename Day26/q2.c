#include <stdio.h>

int main(void)
{
	int starGroups[] = {1, 4, 5, 3, 1};
	int groupCount = sizeof(starGroups) / sizeof(starGroups[0]);

	for (int group = 0; group < groupCount; group++)
	{
		for (int star = 0; star < starGroups[group]; star++)
		{
			printf("*\n");
		}

		if (group < groupCount - 1)
		{
			printf("\n");
		}
	}

	return 0;
}
