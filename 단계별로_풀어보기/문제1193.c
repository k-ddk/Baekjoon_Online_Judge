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
		in++;  //입력받은 숫자가 몇 번째 그룹에 속하는지 알아내기
	}
	n1 = n;

	n1 -= sum(in - 1);  //해당 그룹에서 몇번째에 해당하는지 알아내기

	if (in % 2 == 0)  //짝수번째 그룹이라면 1이 먼저 나옴
		printf("%d/%d", n1, (in + 1) - n1);
	else
		printf("%d/%d", (in + 1) - n1, n1);

	return 0;
}