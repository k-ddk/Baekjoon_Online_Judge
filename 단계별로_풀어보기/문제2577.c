#include <stdio.h>

int main()
{
	int a, num = 1, cnt[10] = { 0, };
	int f;

	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &a);
		num *= a;
	}

	while (1)
	{
		if (num == 0)
			break;

		f = num % 10;
		num /= 10;

		cnt[f]++;
	}

	for (int i = 0; i < 10; i++)
		printf("%d\n", cnt[i]);


	return 0;
}