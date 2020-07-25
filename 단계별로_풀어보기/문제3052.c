#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, cnt[42] = { 0 };
	int ans = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num);

		cnt[num % 42]++;
	}

	for (int i = 0; i < 42; i++)
	{
		if (cnt[i] != 0)
			ans++;
	}

	printf("%d", ans);

	return 0;
}