#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void reverse(char *str, int in)
{
	char tmp = str[in];
	int index = strlen(str) - 1 - in;

	str[in] = str[index];
	str[index] = tmp;

};
int main() {
	char *str1, *str2, *ans;
	int len1, len2, len, f = 0, tmp, i, j, k, cnt = 0;

	str1 = (char*)malloc(sizeof(int)*pow(10, 10000)); //�������� ũ�� ���� �Ҵ��� �ְ�
	str2 = (char*)malloc(sizeof(int)*pow(10, 10000));
	ans = (char*)malloc(sizeof(int)*pow(10, 10000));

	scanf("%s", str1);
	scanf("%s", str2);

	len1 = strlen(str1);
	len2 = strlen(str2);

	for (int i = 0; i < len1 / 2; i++) //���� �Ųٷ� ������
		reverse(str1, i);
	for (int i = 0; i < len2 / 2; i++)
		reverse(str2, i);

	printf("%s %s\n", str1, str2);

	if (len1 > len2)
	{
		len = len1;
	}
	//************for�� ���ľߵ�
	for (i = 0, j = 0; i < len1, j < len2; i++, j++) //len1���� ��, �켱 ���̰� �� ���� ���� ���缭 ������ ���
	{
		printf("*%d%d*\n", i, j);
		tmp = (str1[i] - 48) + (str2[j] - 48); //-48�� ������ ���ڸ� ������ ���ڷ� �����ؼ� ���
		printf("%d\n", tmp);
		if (f != 0) //�ø��ؾ� �ϴ� ���
			tmp++;

		if (tmp / 10 != 0) //�ø��� �߻��ϴ� ���
		{
			f = -1;
			tmp %= 10;
		}
		else
			f = 0;

		ans[i] = tmp;
		cnt++;
	}

	if (i == len1 && j < len2)
	{
		for (k = len1; k < len2; k++)
		{
			tmp = (str2[j] - 48);
			if (f != 0) //�ø��ؾ� �ϴ� ���
				tmp++;

			if (tmp / 10 != 0) //�ø��� �߻��ϴ� ���
			{
				f = -1;
				tmp %= 10;
			}
			else
				f = 0;

			ans[k] = tmp;
			cnt++;
		}
	}
	else if (i < len1 && j == len2)
	{
		for (k = len2; k < len1; k++)
		{
			tmp = (str1[j] - 48);
			if (f != 0) //�ø��ؾ� �ϴ� ���
				tmp++;

			if (tmp / 10 != 0) //�ø��� �߻��ϴ� ���
			{
				f = -1;
				tmp %= 10;
			}
			else
				f = 0;

			ans[k] = tmp;
			cnt++;
		}
	}

	if (f != 0)
		ans[cnt] = 1;

	for (int i = 0; i <=cnt; i++)
		printf("%d", ans[i]);
	printf("*\n");
	for (int i = cnt; i >= 0; i--)
		printf("%d", ans[i]);

	return 0;
}