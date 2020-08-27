#include <stdio.h>
#include <stdlib.h>

char **res;
void prin(int n, int n1)
{
	if (n >= 3)
	{
		prin(n / 3, n1);  //재귀
		for (int i = n / 3; i < n1; i += n)  //n만큼의 간격씩 
		{
			for (int j = n / 3; j < n1; j += n)  //n만큼의 간격씩
			{
				for (int k = i; k < i + n / 3; k++)  //(n/3)*(n/3) 크기의 공백 찍어내기
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
		res[i] = (char*)malloc(sizeof(char)*n);  //이차배열 동적할당

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			res[i][j] = '*';  //우선 별로 채워두기
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