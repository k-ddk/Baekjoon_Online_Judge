#include <stdio.h>

int main()
{
	int n, tmp, cnt = 0, *num, in = 0;

	scanf("%d", &n);

	tmp = n;
	while (1)
	{
		if (tmp == 0)
			break;
		tmp /= 10;
		cnt++;
	}

	num = (int*)malloc(sizeof(int)*cnt);

	tmp = n;
	for (int i = 0; i < cnt; i++)
	{
		num[i] = tmp % 10;
		tmp /= 10;
	}

	for (int i = 0; i < cnt; i++)  //버블정렬로 내림차순 배열
	{
		for (int j = 0; j < cnt - 1; j++)
		{
			if (num[j] < num[j + 1])
			{
				tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < cnt; i++)
		printf("%d", num[i]);

	return 0;
}