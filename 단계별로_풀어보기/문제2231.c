#include <stdio.h>

int main()
{
	int n, res = 0, tmp, t;

	scanf("%d", &n);

	for (int i = 1; i < n; i++)
	{
		tmp = i;  //�ϴ� �ڱ� �ڽ� ���صα�
		t = i;
		while (1)
		{
			tmp += t % 10;
			t /= 10;  //�Ҽ��� �� ĭ�� ����
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