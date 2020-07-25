#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, max = -100;
	double *score, avg = 0;

	scanf("%d", &n);

	score = (double*)malloc(sizeof(double)*n);

	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &score[i]);
		if (score[i] > max)
			max = score[i];

	}

	for (int i = 0; i < n; i++)
	{
		score[i] = (double)score[i] / max * 100;
		avg += score[i];
	}

	avg = (double)avg / n;

	printf("%f", avg);

	return 0;
}