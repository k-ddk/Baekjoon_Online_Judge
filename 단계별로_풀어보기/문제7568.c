#include <stdio.h>
typedef struct  //����ü �̿�
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
		scanf("%d%d", &input[i].weight, &input[i].height);  //�����Կ� Ű �Է¹ް�
		input[i].rank = 1;  //������ ���� 1�� �ʱ�ȭ�ص�
							//������ ��ġ ū ����� ���� ��� �� ������ 1�̹Ƿ�
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