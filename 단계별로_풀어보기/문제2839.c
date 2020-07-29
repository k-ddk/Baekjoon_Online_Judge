#include <stdio.h>

int main()
{
	int n, cnt = -1, tmp;

	scanf("%d", &n);

	if (n % 5 == 0)
		printf("%d", n / 5);
	else
	{
		for (int i = 0; i <=n/5; i++)
		{
			if ((n - 5 * i) % 3 == 0)
				cnt = i + (n - 5 * i) / 3;
		}
			printf("%d", cnt);
	}


	return 0;
}