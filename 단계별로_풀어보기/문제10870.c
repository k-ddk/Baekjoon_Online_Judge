#include <stdio.h>

int fibo(int a1, int a2, int cnt);

int main()
{
	int n;

	scanf("%d", &n);
	printf("%d", fibo(0, 1, n));

	return 0;
}

int fibo(int a1, int a2, int cnt)
{
	if (cnt == 0)
		return a1;
	else
		return fibo(a2, a1 + a2, --cnt);
		
		
}
