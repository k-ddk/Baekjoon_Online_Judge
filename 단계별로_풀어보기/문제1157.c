#include <stdio.h>

int main()
{
	char ch[1000001], max_char;
	int  abc[26] = { 0 }, max_num;

	scanf("%s", ch);  //���ڿ� �Է¹ޱ�

	for (int i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] >= 'a')
			ch[i] -= 32;  //�ҹ��� �빮�ڷ� �ٲ��ֱ�
		abc[ch[i] - 65]++;  //���� Ƚ�� �����صα�
	}

	max_num = 0;
	max_char = '?';
	for (int i = 0; i < 26; i++)
	{
		if (abc[i] > max_num)
		{
			max_num = abc[i];
			max_char = i + 65;
		}
		else if (abc[i] == max_num)
			max_char = '?';
	}

	printf("%c", max_char);

	return 0;
}