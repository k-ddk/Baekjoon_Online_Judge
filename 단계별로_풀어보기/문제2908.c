#include <stdio.h>
int main()
{
	int num1, num2, tmp;

	scanf("%d%d", &num1, &num2);

	tmp = 0;
	for (int i = 0; i < 3; i++)
	{
		tmp += num1 % 10;
		num1 /= 10;
		tmp *= 10;
	}
	tmp /= 10;
	num1 = tmp;

	tmp = 0;
	for (int i = 0; i < 3; i++)
	{
		tmp += num2 % 10;
		num2 /= 10;
		tmp *= 10;
	}
	tmp /= 10;

	num2 = tmp;

	if (num1 > num2)
		printf("%d", num1);
	else
		printf("%d", num2);

	return 0;
}