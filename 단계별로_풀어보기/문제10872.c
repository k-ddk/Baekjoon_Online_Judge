#include <stdio.h>

int main()
{
	int n, res=1;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		res *= i;

	printf("%d", res);

	return 0;
}
