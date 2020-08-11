#include <stdio.h>

int main()
{
	int x, y, w, h;
	int min1, min2;

	scanf("%d%d%d%d", &x, &y, &w, &h);

	min1 = x < (w - x) ? x : (w - x);  //조건연산자->삼항연산자
	min2 = y < (h - y) ? y : (h - y);

	if (min1 < min2)
		printf("%d", min1);
	else
		printf("%d", min2);


	return 0;
}