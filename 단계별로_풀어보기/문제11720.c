#include <stdio.h>

int main()
{
	int n, sum = 0, tmp;
	char ch;

	scanf("%d", &n);
	getchar();

	for (int i = 0; i < n; i++)
	{
		scanf("%c", &ch);
		tmp = ch - 48;
		sum += tmp;
	}

	printf("%d", sum);

	return 0;
}