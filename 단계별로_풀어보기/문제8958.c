#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int n, *cnt, sum;
	char str[80];

	scanf("%d", &n);
	getchar();

	for (int i = 0; i < n; i++)
	{
		gets(str);
		cnt = (int*)malloc(sizeof(int)*strlen(str));

		sum = 0;
		for (int j = 0; j < strlen(str); j++)
		{
			if (j == 0)
			{
				if (str[j] == 'O')
					cnt[j] = 1;
				else
					cnt[j] = 0;
			}
			else
			{
				if (str[j] == 'O')
					cnt[j] = cnt[j - 1] + 1;
				else
					cnt[j] = 0;
			}

			sum += cnt[j];
		}

		printf("%d\n", sum);

	}

	return 0;
}