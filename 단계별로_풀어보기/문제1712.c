#include <stdio.h>

int main()
{
	int A, B, C;
	int n, f = 0;

	scanf("%d%d%d", &A, &B, &C);

	if (B >= C)  //B�� C���� ũ�ų� ���ٸ� ������ ���� �߻� �� �� ����.
		printf("-1");
	else
		printf("%d", A / (C - B) + 1);  //��, ������ ������ ��� ������ �߻��ؾ� �ϹǷ� +1
										//������ ���� ���, �� �̻��̾�� �ϹǷ� +1

	return 0;
}