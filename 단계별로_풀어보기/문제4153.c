#include <stdio.h>

int main()
{
	int len[3], tmp;

	while (1)
	{
		scanf("%d%d%d", &len[0], &len[1], &len[2]);
		if (len[0] == 0 && len[1] == 0 && len[2] == 0)
			break;

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				if (len[j] > len[j + 1])
				{
					tmp = len[j];
					len[j] = len[j + 1];
					len[j + 1] = tmp;
				}
			}
		}
		if (len[2]*len[2] == len[0] * len[0] + len[1] * len[1])
			printf("right\n");
		else
			printf("wrong\n");
	}

	return 0;
}