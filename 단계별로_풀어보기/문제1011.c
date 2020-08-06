#include <stdio.h>

int main()
{
	int T, x, y, len;
	int cnt;

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d%d", &x, &y);

		y -= 1;  //마지막은 반드시 1광년이므로 도착점에 애초에 1을 빼두기
		cnt = 1;  //마지막 1광년가는 횟수 1 더해두기
		len = 0;  //현재까지 이동한 광년은 0

		while (1)
		{
			if (x == y)  //도착시 종료
				break;

			if (y - x >= len + 1)
			{
				x += len + 1;
				len += 1;
				cnt++;
			}
			else if (y - x >= len)
			{
				x += len;
				cnt++;
			}
			else 
			{
				x += len - 1;
				len -= 1;
				cnt++;
			}
		}

		printf("%d\n", cnt);

	}

	return 0;
}