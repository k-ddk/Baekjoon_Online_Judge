#include <stdio.h>
#include <stdbool.h>

int main()
{
	int T, n, t1, t2, a1, a2;
	bool arr[10001];

	scanf("%d", &T);

	for (int i = 2; i <= 10000; i++)
		arr[i] = true;
	arr[1] = false;  //1�� ������ ��� ���ڸ� �켱 �Ҽ��� �صα�

	for (int i = 2; i <= 10000; i++)
	{
		if (arr[i] == true)
		{
			for (int j = 2; j <= 10000 / i; j++)
				arr[i*j] = false;
		}
	}
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &n);

		t1 = 1;
		while (1)
		{
			t1++;
			t2 = n - t1;
			if (t1 > t2)
				break;
			if (arr[t1] && arr[t2] && (t1 + t2 == n))  //������ �����ϴ� ��쿡�� a1, a2 ������ �����صα�
			{
				a1 = t1;
				a2 = t2;
			}
		}

		printf("%d %d\n", a1, a2);
	}


	return 0;
}