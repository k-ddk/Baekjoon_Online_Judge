#include <stdio.h>

char arr[50][50];
int black_first(int in1, int in2)
{
	int cnt = 0;

	for (int i = 0; i < 8; i++)
	{
		if (i % 2 == 0 && arr[in1][in2 + i] == 'W')
			cnt++;
		else if (i % 2 != 0 && arr[in1][in2 + i] == 'B')
			cnt++;
	}

	return cnt;
};
int white_first(int in1, int in2)
{
	int cnt = 0;

	for (int i = 0; i < 8; i++)
	{

		if (i % 2 == 0 && arr[in1][in2 + i] == 'B')
			cnt++;
		else if (i % 2 != 0 && arr[in1][in2 + i] == 'W')
			cnt++;
	}

	return cnt;
};
int main()
{
	int N, M;
	int cnt = 0, min = 100000;

	scanf("%d%d", &N, &M);
	getchar();
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			scanf("%c", &arr[i][j]);
		getchar();
	}  //입력값들 받기..

	for (int i = 0; i <= (N - 8); i++)
	{
		for (int j = 0; j <= (M - 8); j++)
		{
			cnt = 0;
			if (arr[i][j] == 'B')  //B 로 시작하는 경우
			{
				for (int k = i; k <= (i + 6); k += 2)
				{
					cnt += black_first(k, j);
					cnt += white_first(k + 1, j);
				}

			}
			else
			{
				for (int k = i; k <= (i + 6); k += 2)
				{
					cnt += white_first(k, j);
					cnt += black_first(k + 1, j);
				}
			}

			if (cnt < min)
				min = cnt;
		}
	}

	printf("%d", min);

	return 0;
}