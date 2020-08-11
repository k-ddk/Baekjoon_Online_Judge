#include <stdio.h>

int main()
{
	int x[3], y[3], x1, y1, f = 0;

	for (int i = 0; i < 3; i++)
		scanf("%d%d", &x[i], &y[i]);

	if (x[0] == x[1])
		x1 = x[2];
	else
		x1 = (x[0] == x[2] ? x[1] : x[0]);


	if (y[0] == y[1])
		y1 = y[2];
	else
		y1 = (y[0] == y[2] ? y[1] : y[0]);

	printf("%d %d", x1, y1);

	return 0;
}