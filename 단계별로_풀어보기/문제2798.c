#include <stdio.h>

int main()
{
	int n, m;
	int num[100],  sum = 0, max = 0;

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);

	for (int i = 0; i <= n - 3; i++)
	{
		for (int j = i + 1; j <= n - 2; j++)
		{
			for (int k = j + 1; k <= n-1; k++)
			{
				sum = num[i] + num[j] + num[k];

				if (sum > max && sum <= m)
					max = sum;
			}
		}
	}

	printf("%d\n", max);

	return 0;
}