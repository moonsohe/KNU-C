#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;

	printf("정수 입력:");
	scanf_s("%d", &num);
	printf("키보드로 입력받은 정수는 %d입니다\n", num);

	return 0;
}
