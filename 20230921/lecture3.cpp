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
	printf("계산할 팩토리얼 값 입력 : ");
	scanf_s("%d", &num);

	printf("%d", acc(num));
}

