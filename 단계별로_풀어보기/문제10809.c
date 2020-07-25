#include <stdio.h>
#include <string.h>

int main()
{
	char str[100], abc[26];
	int in;

	gets(str);

	for (int i = 0; i < 26; i++)
		abc[i] = -1;

	for (int i = 0; i < strlen(str); i++)
	{
		in = 0;
		for (char c = 'a'; c <= 'z'; c++)
		{
			if (str[i] == c)
				break;
			in++;
		}
		if (abc[in] == -1)
			abc[in] = i;
	}

	for (int i = 0; i < 26; i++)
		printf("%d ", abc[i]);

	return 0;
}