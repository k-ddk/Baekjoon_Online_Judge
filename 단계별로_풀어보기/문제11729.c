#include <stdio.h>
#include <math.h>
;
void hanoi(int n, int from, int tmp, int to) {

	if (n == 1) {  //마지막에 도달한 경우 재귀함수 탈출
		printf("%d %d\n", from, to);
	}
	else {
		hanoi(n - 1, from, to, tmp);
		printf("%d %d\n", from, to);
		hanoi(n - 1, tmp, from, to);
	}

};
int main()
{
	int n, cnt;

	scanf("%d", &n);
	cnt = pow(2, n) - 1;
	printf("%d\n", cnt);

	hanoi(n, 1, 2, 3);

	return 0;
}