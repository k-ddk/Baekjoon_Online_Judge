#include <stdio.h>

int main()
{
	int A, B, C;
	int n, f = 0;

	scanf("%d%d%d", &A, &B, &C);

	if (B >= C)  //B가 C보다 크거나 같다면 이익은 절대 발생 할 수 없다.
		printf("-1");
	else
		printf("%d", A / (C - B) + 1);  //딱, 나누어 떨어질 경우 이익이 발생해야 하므로 +1
										//나머지 생길 경우, 그 이상이어야 하므로 +1

	return 0;
}