#include <stdio.h>
#include <stdlib.h>

int *sorted;
void merge(int num[], int left, int mid, int right)
{
	int i = left, j = mid+1, k = left;

	while (1)
	{
		printf("while문 들어옴*");
		if (i > mid || j >right)
			break;

		printf("지금 num[i], num[j]는 : %d %d\n", num[i], num[j]);
		if (num[i] < num[j])
			sorted[k++] = num[i++];
		else
			sorted[k++] = num[j++];
	}
	printf("while문빠져나옴*");

	if (i > mid && j<=right)
	{
		for (int l = j; l <= right; l++)
			sorted[k++] = num[l];
	}
	else if (i<=mid && j>right)
	{
		for (int l = i; i <= mid; i++)
			sorted[k++] = num[l];
	}

	return;
}
int* merge_sort(int num[], int left, int right)
{
	int mid;

	if (left < right)
	{
		mid = (left + right) / 2;
		merge_sort(num, left, mid);
		merge_sort(num, mid + 1, right);
		merge(num, left, mid, right);
	}
}
int main()
{
	int N, *num;

	scanf("%d", &N);

	num = (int*)malloc(sizeof(int)*N);
	sorted = (int*)malloc(sizeof(int)*N);

	for (int i = 0; i < N; i++)
		scanf("%d", &num[i]);

	merge_sort(num, 0, N - 1);

	for (int i = 0; i < N; i++)
		printf("%d\n", sorted[i]);

	return 0;
}