#include <stdio.h>
#include <string.h>
#define MAX 1000000

int main()
{
	char str[MAX];
	int cnt = 0, i, j;

	gets(str);  //���� ���� ���ڿ� �Է¹ޱ�, ������������!


	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] != ' ')  //*����!, ó���� " "�� �ؼ� Ʋ����. ������ ��!
		{
			cnt++;

			for (j = i; j < strlen(str); j++)
			{
				if (str[j] == ' ')
					break;
			}

			i = j;
		}
	}


	printf("%d", cnt);


	return 0;
}