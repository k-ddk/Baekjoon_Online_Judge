#include <stdio.h>

#define SIZE 1000000
int main()
{
	int num[SIZE] = { 0, };  //왜 바로 num[1000000]은 안 되는 건지

	printf("%d %d %d %d\n", num[0], num[1], num[2], num[3]);


	return 0;
}