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

		if (r1 < r2)  //�� ū ���� r1
		{
			tmp = r1;
			r1 = r2;
			r2 = tmp;
		}

		if (d == 0)  //�� ���� ���� ��
		{
			if (r1 > r2)
				printf("0\n");
			else
				printf("-1\n");
		}
		else  //���� �ٸ� �� ��..
		{
			if (r1 - r2 < sqrt(d) && sqrt(d) < r1 + r2)
				printf("2\n");
			else if (sqrt(d) == r1 + r2 || sqrt(d) == r1 - r2)  //�����ϴ� ���
				printf("1\n");
			else if (r1 + r2 < sqrt(d) || sqrt(d) < r1 - r2)
				printf("0\n");

		}

	}


	return 0;
}