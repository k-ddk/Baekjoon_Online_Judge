#include <stdio.h>
#include <string.h>
#define MAX 1000000

int main()
{
	char str[MAX];
	int cnt = 0, i, j;

	gets(str);  //공백 포함 문자열 입력받기, 엔터이전까지!


	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] != ' ')  //*주의!, 처음에 " "로 해서 틀렸음. 구분할 것!
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