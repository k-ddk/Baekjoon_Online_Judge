#include <stdio.h>
#include <string.h>

int main()
{
	int n, in, f, cnt=0;
	char str[100], tmp[100];

	scanf("%d", &n);
	getchar();

	for (int i = 0; i < n; i++)
	{
		scanf("%s", &str);

		f = 0;
		in = 0;
		for (int j = 0; j < strlen(str); j++)
		{
			for (int k = 0; k < in; k++)  
			{
				if (str[j] == tmp[k]) //�� ���� �����ص� ���� �迭�� �̹� �����Ѵٸ�
					f = 1; //f�� ǥ���صα�
			}
			if (f == 1) //f�� 1 �̶�� j�� ���� ���ٽ����༭ for�� ���������� �ϱ�
				j = strlen(str);

			tmp[in++] = str[j]; //�� ���� �������� �ʾҴ� ������ ��� tmp�迭�� �߰����ֱ�
			while (1) //�� �ڷ� �����ؼ� �����ϴ��� Ȯ��
			{
				if (str[j] == str[j + 1]) //���ٸ� ��� j���� ��� ����
					j++;
				else //�ٸ��ٸ� while�� ����������
					break;
			}
		}
		if (f != 1) //f�� 1�� �ƴ϶�� �׷�ܾ��̹Ƿ�
		{
			cnt++; //cnt�� ����
			printf("%s\n", str);
		}
			
	}

	printf("%d", cnt);

	return 0;
}