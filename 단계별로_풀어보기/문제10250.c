#include <stdio.h>

int main()
{
	int T, H, W, N;
	int floor, num;

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d%d%d", &H, &W, &N);

		if (N % H == 0)
		{
			floor = H;
			num = N / H;
		}
		else
		{
			floor = N % H;
			num = N / H + 1;
		}
		printf("%d%02d\n", floor, num);
	}

	return 0;
}