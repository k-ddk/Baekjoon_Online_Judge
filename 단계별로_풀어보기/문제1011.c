#include <stdio.h>
#include <math.h>

int main()
{
	int T, x, y, len, tmp;
	int cnt;

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d%d", &x, &y);

		len = y - x;

		if (len == 1)
		{
			printf("1\n");
			continue;
		}

		tmp = sqrt(len);

		//예를 들어 제곱수 9를 기준으로
		if (tmp*tmp == len)  //9인 경우
			printf("%d\n", 2 * tmp - 1);
		else if ((tmp + 1)*(tmp + 1) - len <= tmp)  //3의 제곱인 9기준 3개에 해당하는 경우
			printf("%d\n", 2 * tmp + 1);
		else   
			printf("%d\n", 2 * tmp);

	}

	return 0;
}
