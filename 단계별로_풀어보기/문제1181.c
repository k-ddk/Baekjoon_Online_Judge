#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	int N;
	char **str, tmp[50];

	scanf("%d", &N);
	getchar();

	str = (char**)malloc(sizeof(char*)*N);
	for (int i = 0; i < N; i++)
		str[i] = (char*)malloc(sizeof(char) * 50);

	for (int i = 0; i < N; i++)
		gets(str[i]);

	for (int i = N-1; i =0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			printf("**현재비교중인문자열**\n");
			printf("%s\n", str[j]);
			printf("%s\n", str[j + 1]);
			printf("문자열 길이는 각각 %d %d\n", strlen(str[j]), strlen(str[j + 1]));

			if (strlen(str[j]) > strlen(str[j + 1]))
			{
				strcpy(tmp,str[j]);
				str[j]=str[j+1];
				str[j + 1]=tmp;
			}
			else if (strlen(str[j]) == strlen(str[j + 1]))
			{
				if (strcmp(str[j], str[j + 1])>0)
				{
					strcpy(tmp, str[j]);
					str[j] = str[j + 1];
					str[j + 1] = tmp;
				}
			}
		}
	}


	for (int i = 0; i < N; i++)
		printf("%s\n", str[i]);

	return 0;
}