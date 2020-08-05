#include <stdio.h>

int main()
{
	int n, num, f, cnt = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);

		f = 0;

		if (num != 1)
		{
			for (int j = 2; j < num; j++)
			{
				if (num%j == 0)
				{
					f = 1;
					break;
				}
			}
			if (f == 0)
				cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}