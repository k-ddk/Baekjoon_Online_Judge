#include <stdio.h>

int main()
{
	int N, arr[1000], key;
	int i, j;

	scanf("%d", &N);

	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	for (i = 1; i < N; i++)
	{
		key = arr[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (arr[j] > key)
				arr[j + 1] = arr[j];
			else
				break;
		}
		arr[j + 1] = key;
	}

	for (int i = 0; i < N; i++)
		printf("%d\n", arr[i]);

	return 0;
}