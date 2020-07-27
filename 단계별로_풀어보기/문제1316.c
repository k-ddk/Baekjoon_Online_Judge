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
				if (str[j] == tmp[k]) //한 개씩 저장해둔 문자 배열에 이미 존재한다면
					f = 1; //f에 표시해두기
			}
			if (f == 1) //f가 1 이라면 j의 값을 오바시켜줘서 for문 빠져나가게 하기
				j = strlen(str);

			tmp[in++] = str[j]; //한 번도 등장하지 않았던 문자의 경우 tmp배열에 추가해주기
			while (1) //그 뒤로 연속해서 등장하는지 확인
			{
				if (str[j] == str[j + 1]) //같다면 계속 j값을 계속 증가
					j++;
				else //다르다면 while문 빠져나가기
					break;
			}
		}
		if (f != 1) //f가 1이 아니라면 그룹단어이므로
		{
			cnt++; //cnt값 증가
			printf("%s\n", str);
		}
			
	}

	printf("%d", cnt);

	return 0;
}