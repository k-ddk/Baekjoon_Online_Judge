#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, *num;
	int avg, median, mode, span;
	double sum = 0;
	int tmp, cnt, max = 0, min1 = 4001, min2 = 4001, f = 0;

	scanf("%d", &N);
	num = (int*)malloc(sizeof(int)*N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
		sum += num[i];
	}
	avg = (double)sum / N + 0.5;
	printf("%d\n", avg);


	for (int i = 0; i < N; i++)  //�������� ��������***********�����ķ� �ٲٱ�
	{
		for (int j = 0; j < N - 1; j++)
		{
			if (num[j] > num[j + 1])
			{
				tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;
			}
		}
	}
	median = num[N / 2];  //�߾Ӱ�
	printf("%d\n", median);


	for (int i = 0; i < N; i++)
	{
		cnt = 0;
		for (int j = i; j < N; j++)
		{
			if (num[i] == num[j])
				cnt++;
		}

		if (cnt > max)
		{
			f = 0;  //�ֺ��� 1���� ���
			max = cnt;
			min1 = num[i];
		}
		else if (cnt == max)
		{
			f = 1;  //�ֺ��� ���� ���� ���

			if (min1 > min2)
			{
				tmp = min1;
				min1 = min2;
				min2 = tmp;  //�׻� min1�� min2���� �۵���
			}

			if (num[i] < min2)
				min2 = num[i];
		}
	}
	if (f == 0)
		mode = min1;
	else
		mode = (min1 < min2 ? min2 : min1);  //�ֺ�

	printf("%d\n", mode);

	span = num[N - 1] - num[0];
	printf("%d\n", span);



	return 0;
}