#include<stdio.h>

int main()
{
	int year,a;
	printf("년도 입력 :");
	scanf_s("%d", &year);

	a = (year%4==0 && !(year%100==0)) || year % 400 == 0;

	printf("윤년인 경우에는 1 출력, 평년일 경우에는 0 출력\n");
	printf("%d", a);
}