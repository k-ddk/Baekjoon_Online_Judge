#include <stdio.h>

int main()
{
	int n, cnt;

	scanf("%d", &n);

	for (int i = 1; i <= 2 * n; i++)
	{

		cnt = n;
		if (i % 2 == 0)
		{
			while (1)
			{
				printf(" ");
				cnt--;
				if (cnt == 0)
					break;
				printf("*");
				cnt--;
				if (cnt == 0)
					break;
			}
			printf("\n");
			continue;
		}
		else
		{
			while (1)
			{
				printf("*");
				cnt--;
				if (cnt == 0)
					break;
				printf(" ");
				cnt--;
				if (cnt == 0)
					break;
			}
			printf("\n");
			continue;
		}
	}


	return 0;
}