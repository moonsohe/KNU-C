#include<stdio.h>

int acc(int num) {
	int result = 0;

	if (num == 0) {
		return 1;
	}
	result = num * acc(num - 1);

	return result;
}

int main()
{
	int num;
	printf("����� ���丮�� �� �Է� : ");
	scanf_s("%d", &num);

	printf("%d", acc(num));
}

