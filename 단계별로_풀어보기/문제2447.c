#include <stdio.h>
#include <stdlib.h>

char **res;
void prin(int n, int n1)
{
	if (n >= 3)
	{
		prin(n / 3, n1);  //���
		for (int i = n / 3; i < n1; i += n)  //n��ŭ�� ���ݾ� 
		{
			for (int j = n / 3; j < n1; j += n)  //n��ŭ�� ���ݾ�
			{
				for (int k = i; k < i + n / 3; k++)  //(n/3)*(n/3) ũ���� ���� ����
				{
					for (int l = j; l < j + n / 3; l++)
						res[k][l] = ' ';
				}
			}
		}
	}

}
int main()
{
	int n;

	scanf("%d", &n);
	res = (char**)malloc(sizeof(char*)*n);
	for (int i = 0; i < n; i++)
		res[i] = (char*)malloc(sizeof(char)*n);  //�����迭 �����Ҵ�

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			res[i][j] = '*';  //�켱 ���� ä���α�
	}

	prin(n, n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			printf("%c", res[i][j]);
		printf("\n");
	}

	return 0;
}