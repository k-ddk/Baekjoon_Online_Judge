#include <stdio.h>

int x[10000] = { 0 };
void d(int n)
{
	int tmp = n;

	while (1)
	{
		tmp += n % 10;
		n /= 10;
		if (n == 0)
			break;
	}

	if (tmp > 10000)
		return;
	else
	{
		x[tmp - 1] = 1;
		d(tmp);
	}
};

int main()
{
	for (int i = 1; i <= 10000; i++)
		d(i);

	for (int i = 0; i < 10000; i++)
	{
		if (x[i] == 0)
			printf("%d\n", i + 1);
	}
	return 0;
}
