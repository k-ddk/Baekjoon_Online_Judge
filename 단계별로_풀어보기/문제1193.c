#include <stdio.h>
int sum(int in)
{
	int ans = 0;

	for (int i = 1; i <= in; i++)
		ans += i;

	return ans;
};
int main()
{
	int n, n1, in = 1, tmp;

	scanf("%d", &n);
	n1 = n;

	while (1)
	{
		n1 -= in;
		if (n1 <= 0)
			break;
		in++;  //�Է¹��� ���ڰ� �� ��° �׷쿡 ���ϴ��� �˾Ƴ���
	}
	n1 = n;

	n1 -= sum(in - 1);  //�ش� �׷쿡�� ���°�� �ش��ϴ��� �˾Ƴ���

	if (in % 2 == 0)  //¦����° �׷��̶�� 1�� ���� ����
		printf("%d/%d", n1, (in + 1) - n1);
	else
		printf("%d/%d", (in + 1) - n1, n1);

	return 0;
}