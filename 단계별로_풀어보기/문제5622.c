#include <stdio.h>
#include <string.h>

int main()
{
	char str[15];
	int sec = 0, tmp;

	gets(str);

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'W')
		{
			sec += 10;
			continue;
		}
		else if (str[i] == 'S' || str[i] == 'V')
			tmp = str[i] - 66;
		else
			tmp = str[i] - 65;
		tmp /= 3;
		tmp += 3;
		sec += tmp;
	}

	printf("%d", sec);

	return 0;
}