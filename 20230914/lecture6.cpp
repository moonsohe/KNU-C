#include<stdio.h>

int main()
{
	int num;

	printf("���� �Է�:");
	scanf_s("%d", &num);

	
		if (num > 0)
			printf("%d�� ���� �����Դϴ�\n");
		else if (num < 0)
			printf("%d�� ���� �����Դϴ�\n");
		else
			printf("%d�� 0�Դϴ�\n");

		return 0;
}