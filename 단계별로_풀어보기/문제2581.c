#include <stdio.h>

int main()
{
	int M, N, min = -1, f, sum = 0;

	scanf("%d%d", &M, &N);

	for (int i = M; i <= N; i++)
	{
		f = 0;
		if (M != 1)
		{
			for (int j = 2; j < i; j++)
			{
				if (i%j == 0)
				{
					f = 1;  //소수가 아님을 표시하고
					break;
				}
			}
			if (f == 0)  //소수인 경우
			{
				sum += i;
				if (min == -1)
					min = i;
			}
		}
	}

	if (sum == 0)
		printf("-1");
	else
	{
		printf("%d\n", sum);
		printf("%d\n", min);
	}

	return 0;
}