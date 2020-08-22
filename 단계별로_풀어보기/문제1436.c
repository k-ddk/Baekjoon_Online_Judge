#include <stdio.h>
#include <math.h>

int main()
{
	int N;
	int cnt = 0, tmp = 665;

	scanf("%d", &N);

	while (1)
	{
		tmp++;

		for (int i = 0;; i++)
		{
			if (tmp / (int)pow(10, i) == 0)
				break;
			if (tmp / (int)pow(10, i) % 1000 == 666)
			{
				cnt++;
				break;
			}

		}

		if (cnt == N)
			break;
	}

	printf("%d", tmp);

	return 0;
}