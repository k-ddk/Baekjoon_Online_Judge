#include <stdio.h>
#include <math.h>

int main()
{
	int T, x, y, len, tmp;
	int cnt;

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d%d", &x, &y);

		len = y - x;

		if (len == 1)
		{
			printf("1\n");
			continue;
		}

		tmp = sqrt(len);

		if (tmp*tmp == len)
			printf("%d\n", 2 * (tmp - 1) + 1);
		else if ((tmp + 1)*(tmp + 1) - len > tmp)
			printf("%d\n", 2 * tmp);
		else
			printf("%d\n", 2 * tmp + 1);

	}

	return 0;
}