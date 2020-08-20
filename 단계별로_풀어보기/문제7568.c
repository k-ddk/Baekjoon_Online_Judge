#include <stdio.h>
typedef struct  //구조체 이용
{
	int weight;
	int height;
	int rank;
}PERSON;

int main()
{
	int n;
	PERSON input[50];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d", &input[i].weight, &input[i].height);  //몸무게와 키 입력받고
		input[i].rank = 1;  //순위는 전부 1로 초기화해둠
							//나보다 덩치 큰 사람이 없는 경우 내 순위는 1이므로
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (input[i].weight < input[j].weight&&input[i].height < input[j].height)
				input[i].rank++;
		}
	}

	for (int i = 0; i < n; i++)
		printf("%d ", input[i].rank);

	return 0;
}