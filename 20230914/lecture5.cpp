#include<stdio.h>

int main()
{
	int year,a;
	printf("�⵵ �Է� :");
	scanf_s("%d", &year);

	a = (year%4==0 && !(year%100==0)) || year % 400 == 0;

	printf("������ ��쿡�� 1 ���, ����� ��쿡�� 0 ���\n");
	printf("%d", a);
}