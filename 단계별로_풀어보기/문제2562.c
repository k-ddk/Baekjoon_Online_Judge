#include <stdio.h>

int main()
{
	int in, num[9], max;

	max = -100;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] > max)
		{
			max = num[i];
			in = i;
		}
	}

	printf("%d\n", max);
	printf("%d\n", in + 1);


	return 0;
}