#include <stdio.h>
#include <time.h>

int main()
{
	int A, B, V, days = 0, t = 0;
	int start, fin;

	start = clock();
	scanf("%d%d%d", &A, &B, &V);

	while (1)
	{
		days++;  //몇 일차?

		t += A;
		if (t >= V)
			break;
		t -= B;
	}

	printf("%d\n", days);

	fin = clock();

	printf("시간측정: %d", (fin - start)/CLOCKS_PER_SEC);
	return 0;
}