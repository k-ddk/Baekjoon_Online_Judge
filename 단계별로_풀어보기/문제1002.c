#include <stdio.h>
#include <math.h>

int main()
{
	int T, x1, y1, r1, x2, y2, r2, tmp;
	int d;

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d%d%d%d%d%d", &x1, &y1, &r1, &x2, &y2, &r2);
		d = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);

		if (r1 < r2)
		{
			tmp = r1;
			r1 = r2;
			r2 = tmp;
		}
		if (x1 == x2 && y1 == y2 && r1 == r2)
			printf("-1\n");
		else if (x1 == x2 && y1 == y2 && r1 != r2)
			printf("0\n");
		else if ((r1 + r2) == sqrt(d) || (r1-r2)==sqrt(d))
			printf("1\n");
		else if )()


	
	}


	return 0;
}