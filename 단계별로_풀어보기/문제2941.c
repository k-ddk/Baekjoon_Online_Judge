#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	int cnt = 0;

	gets(str);

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == 'c')
		{
			if (str[i + 1] == '=' || str[i + 1] == '-')
				i++;
		}
		else if (str[i] == 'd')
		{
			if (str[i + 1] == 'z'&&str[i + 2] == '=')
				i += 2;
			else if (str[i + 1] == '-')
				i++;
		}
		else if (str[i] == 'l'&&str[i + 1] == 'j')
			i++;
		else if (str[i] == 'n'&&str[i + 1] == 'j')
			i++;
		else if (str[i] == 's'&&str[i + 1] == '=')
			i++;
		else if (str[i] == 'z'&&str[i + 1] == '=')
			i++;

		cnt++;
	}

	printf("%d", cnt);

	return 0;
}