#include <stdio.h>
#include <math.h>

int main()
{
	int T, x, y, tmp, cnt;
	double len;

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

		tmp = ceil(sqrt(len));

		if (len>=(tmp*tmp)-tmp+1)
			printf("%d\n", 2 * (tmp - 1) + 1);
		else
			printf("%d\n", 2 * (tmp - 1));

	}


	return 0;
}