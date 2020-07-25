#include <stdio.h>

int main()
{
	int n, cnt = 0, tmp;
	int x[3], f;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		if (i == 1000)
			break;

		f = 0;
		tmp = i;
		while (1)
		{
			x[f++] = tmp % 10;
			tmp /= 10;
			if (tmp == 0)
				break;
		}

		if (f == 2 || f == 1)
		{
			cnt++;
			continue;
		}
		else
		{
			if (x[1] - x[0] == x[2] - x[1])
				cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}