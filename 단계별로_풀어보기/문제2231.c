#include <stdio.h>

int main()
{
	int n, res = 0, tmp, t;

	scanf("%d", &n);

	for (int i = 1; i < n; i++)
	{
		tmp = i;  //일단 자기 자신 더해두기
		t = i;
		while (1)
		{
			tmp += t % 10;
			t /= 10;  //소수점 한 칸씩 당기기
			if (t == 0)
				break;
		}
		if (tmp == n)
		{
			res = i;
			break;
		}
	}

	printf("%d\n", res);

	return 0;
}