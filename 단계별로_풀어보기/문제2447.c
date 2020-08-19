#include <stdio.h>

void prin(int n);
int main()
{
	int n;

	scanf("%d", &n);







	return 0;
}
void prin(int n)
{
	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i == 1 && j == 1)
					printf(" ");
				printf("*");
			}
			printf("\n");
		}
	}
}