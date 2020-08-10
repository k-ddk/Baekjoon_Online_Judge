#include <stdio.h>
#include <stdlib.h>

int main()
{
	int M, N, *arr, tmp;

	scanf("%d%d", &M, &N);

	arr = (int*)malloc(sizeof(int) * 1000001);
	for (int i = 1; i < 1000001; i++)
		arr[i] = 1;  //일단 다 소수라고 표시(=1)

	arr[1] = 0;
	for (int i = 2; i <= N; i++)
	{
		if (arr[i] == 1)
		{
			for (int j = 2; j <= N/i; j++)
					arr[i*j] = 0;
		}
	}

	for (int i = M; i <= N; i++)
	{
		if (arr[i] == 1)
			printf("%d\n", i);
	}

		return 0;
}