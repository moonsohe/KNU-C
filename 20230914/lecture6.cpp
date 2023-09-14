#include<stdio.h>

int main()
{
	int num;

	printf("정수 입력:");
	scanf_s("%d", &num);

	
		if (num > 0)
			printf("양의 정수입니다\n");
		else if (num < 0)
			printf("음의 정수입니다\n");
		else
			printf("0입니다\n");

		return 0;
}