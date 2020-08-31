#include <stdio.h>

typedef struct  //ÁÂÇ¥ ±¸Á¶Ã¼ 
{
	int x;
	int y;
}LOC;
int main()
{
	int n;
	LOC *arr, tmp;

	scanf("%d", &n);

	arr = (LOC*)malloc(sizeof(LOC)*n);

	for (int i = 0; i < n; i++)
		scanf("%d%d", &arr[i].x, &arr[i].y);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (arr[j].x > arr[j + 1].x)
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			else if ((arr[j].x == arr[j + 1].x) && (arr[j].y > arr[j + 1].y))
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < n; i++)
		printf("%d %d\n", arr[i].x, arr[i].y);

	return 0;
}