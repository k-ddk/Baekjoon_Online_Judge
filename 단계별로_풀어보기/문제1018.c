#include <stdio.h>

char arr[50][50];
int black_first(int in1, int in2)
{
	int cnt1 = 0;

	for (int i = 0; i < 8; i += 2)
	{
		if (arr[in1][in2 + i] == 'W')
			cnt1++;
		if (arr[in1][in2 + i + 1] == 'B')
			cnt1++;
	}

	return cnt1;
};
int white_first(int in1, int in2)
{
	int cnt1 = 0;

	for (int i = 0; i < 8; i += 2)
	{
		if (arr[in1][in2 + i] == 'B')
			cnt1++;
		if (arr[in1][in2 + i + 1] == 'W')
			cnt1++;
	}

	return cnt1;
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
			for (int k = i; k <= i + 6; k += 2)  //B로 시작하는 경우
			{
				cnt += black_first(k, j);
				cnt += white_first(k + 1, j);
			}
			if (cnt < min)
				min = cnt;


			cnt = 0;
			for (int k = i; k <= (i + 6); k += 2)  //W로 시작하는 경우
			{
				cnt += white_first(k, j);
				cnt += black_first(k + 1, j);
			}
			if (cnt < min)
				min = cnt;
		}
	}

	printf("%d", min);

	return 0;
}

