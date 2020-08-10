#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *arr, n, cnt = 0;

	arr = (int*)malloc(sizeof(int) * 246913);
	for (int i = 1; i <= 246912; i++)
		arr[i] = 1;
	arr[1] = 0;
	for (int i = 2; i <= 246912; i++)
	{
		if (arr[i] == 1)
		{
			for (int j = 2; j <= 246912 / i; j++)
				arr[i*j] = 0;
		}
	}

	while (1)
	{
		scanf("%d", &n);
		if (n == 0)
			break;

		cnt = 0;
		for (int i = n+1; i <= 2 * n; i++)
		{
			if (arr[i] == 1)
				cnt++;
		}

		printf("%d\n", cnt);
	}



	return 0;
}