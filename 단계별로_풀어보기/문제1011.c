#include <stdio.h>

int main()
{
	int T, x, y, len;
	int cnt;

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d%d", &x, &y);

		y -= 1;  //�������� �ݵ�� 1�����̹Ƿ� �������� ���ʿ� 1�� ���α�
		cnt = 1;  //������ 1���Ⱑ�� Ƚ�� 1 ���صα�
		len = 0;  //������� �̵��� ������ 0

		while (1)
		{
			if (x == y)  //������ ����
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