#include <stdio.h>

int main()
{
	int n, in = 1, f = 0;

	scanf("%d", &n);

	while (1)
	{
		if (f == 0)
		{
			n -= 1;
			f++;
		}
		else
		{
			n -= 6 * in;
			in++;
		}
	
		if (n <= 0)
			break;
	}

	if (n == 0)
		printf("%d", in);
	else
		printf("%d", in++);


	return 0;
}