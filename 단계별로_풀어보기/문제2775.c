#include <stdio.h>

int func(int k, int n)
{
	if (n == 0)
		return 0;
	else if (k == 0)
		return n;
	else
		return func(k , n - 1) + func(k - 1, n);
};
int main()
{
	int T, k, n;

	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d%d", &k, &n);
		printf("%d\n", func(k, n));

	}

	return 0;
}