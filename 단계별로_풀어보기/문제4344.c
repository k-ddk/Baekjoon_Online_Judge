#include <stdio.h>

int main()
{
	int n, s_num, score[1000], cnt;
	double avg;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &s_num);

		avg = 0;
		cnt = 0;
		for (int j = 0; j < s_num; j++)
		{
			scanf("%d", &score[j]);
			avg += score[j];
		}
		avg = (double)avg / s_num;

		for (int k = 0; k < s_num; k++)
		{
			if (score[k] > avg)
				cnt++;
		}

		printf("%.3f%%\n", (double)cnt / s_num * 100);
	}

	return 0;
}