#include <stdio.h>

int main()
{
	int N, num[1000], tmp;

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &num[i]);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N - 1; j++)
		{
			if (num[j] > num[j + 1])
			{
				tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < N; i++)
		printf("%d\n", num[i]);


	return 0;
}